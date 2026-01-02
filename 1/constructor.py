import json
import sys
import re

#import numpy as np

def node_name(node):
    #print("node_name:", node, isinstance(node, int))
    if (not isinstance(node, int)):
        #print(not isinstance(node, int))
        match = re.match(r"([a-zA-Z]+)(\d+)", node)
        if match:
            return match.group(1), False 
    else:
        return node, True

def node_num(node):
    if (not isinstance(node, int)):
        #print(not isinstance(node, int))
        match = re.match(r"([a-zA-Z]+)(\d+)", node)
        if match:
            return int(match.group(2)), False 
    else:
        return node, True

class module:
    def __init__ (self, module_json):
        self.module_json = module_json

        self.gate_dict = self.module_json["gates"]

        self.node_dict = self.module_json["schematics"]["gates"]
        self.node_connects = self.module_json["schematics"]["drivers"]

        self.node_weight = {y:-1 for y in self.node_dict}
        self.node_true = {y:False for y in self.node_dict}
        self.node_in_calc = {y:False for y in self.node_dict}

        self.out = self.module_json["schematics"]["output"]


    def sort (self):
        for node_i in self.out:
            #print("Start: ", node_i)
            node, _ = node_name(node_i)
            w = self.sort_r(node)
            if w == "no way":
                return w
        self.node_weight = dict(sorted(self.node_weight.items(), key=lambda item: item[1]))
        return "all good"   
        
        

    def sort_r(self, node):
        #print("Check: ", node)
        inp_n = self.gate_dict[self.node_dict[node]]["inw"]
        max_w = -1

        if self.node_true[node]:
            return self.node_weight[node]
        
        self.node_in_calc[node] = True

        for i in range(inp_n):
            i_node, num = node_name(self.node_connects[node + str(i)])
            if num:
                w = 0
            else:
                if self.node_in_calc[i_node]:
                    w = "no way"
                else:
                    w = self.sort_r(i_node)
            
            if w == "no way":
                return w
            else:
                if (w > max_w):
                    max_w = w
        
        self.node_in_calc[node] = False
        self.node_true[node] = True
        self.node_weight[node] = max_w + 1
        #print ("Set: ", node, " = ", max_w+1)

        return max_w + 1
    
    def c_dump(self, filename):
        with open(filename, "w") as file:
            file.write('#include <stdint.h>\n')
            file.write('#include <stdio.h>\n')
            file.write('#include <stdlib.h>\n')
            file.write('\n')
            file.write('\n')
            file.write('\n')
            file.write('void calc (const uint8_t in [], uint8_t out [])\n')
            file.write('{\n')

            for node in self.node_weight:
                if self.node_true[node]:
                    inp_n = self.gate_dict[self.node_dict[node]]["inw"]
                    out_n = self.gate_dict[self.node_dict[node]]["outw"]

                    print('\tuint8_t* ', node, '_in = calloc(', (inp_n//8)+1,', sizeof(uint8_t));\n', file=file,  end='', sep='')
                    print('\tuint8_t* ', node, '_out = calloc(', (out_n//8)+1,', sizeof(uint8_t));\n', file=file,  end='', sep='')

                    for i in range(inp_n):
                        i_node, is_num = node_name(self.node_connects[node + str(i)])
                        i_num, is_num = node_num(self.node_connects[node + str(i)])
                        print('\t', node, '_in[', i//8, '] |= ', file=file,  end='', sep='')
                        if(is_num):
                            print('(in[', file=file,  end='', sep='')
                        else:
                            print('(', i_node,'_out[', file=file,  end='', sep='')    
                        
                        print(i_num//8 ,'] & (1 << ', i_num%8,'));\n', file=file,  end='', sep='')

                    print('\t \n', file=file,  end='', sep='')

                    print('\tuint64_t ', node, '_table[] = {', file=file,  end='', sep='')
                    table_arr = self.gate_dict[self.node_dict[node]]["table"]
                    for i in range(len(table_arr) - 1):
                        print(table_arr[i], ', ', file=file,  end='', sep='')
                    print(table_arr[len(table_arr)-1], ' };\n', file=file,  end='', sep='')

                    print('\t \n', file=file,  end='', sep='')

                    print('\tuint64_t ', node, '_in_ex = 0;\n', file=file,  end='', sep='')

                    for i in range(inp_n//8 + 1, 0, -1):
                        print('\t', node, '_in_ex += ', node, '_in_ex*256 + (uint64_t)(', node, '_in[', i,']);\n', file=file,  end='', sep='')

                    print('\tuint64_t ', node, '_out_ex = (',node ,'_table[', node,'_in_ex]); \n', file=file,  end='', sep='')

                    print('\t \n', file=file,  end='', sep='')

                    for i in range(out_n//8 + 1):
                        print('\t', node, '_out[', i,'] = ', node, '_out_ex >> ', 8*i,';\n', file=file,  end='', sep='')
                    
                    #print(i_num//8 ,'] & (1 << ', i_num,'));\n', file=file,  end='', sep='')

                    print('\t \n', file=file,  end='', sep='')

                    print('\tfree(', node, '_in);\n', file=file,  end='', sep='')

                    print('\t \n', file=file,  end='', sep='')
                    print('\t \n', file=file,  end='', sep='')
            
            i = 0
            for node in self.out:
                i_node, is_num = node_name(node)
                i_num, is_num = node_num(node)
            
                print('\tout[', i//8, '] |= (', i_node,'_out[', i_num//8 ,'] & (1 << ', i_num%8,'));\n', file=file,  end='', sep='')

                i += 1

            print('\t \n', file=file,  end='', sep='')

            for node in self.node_weight:
                if self.node_true[node]:
                    print('\tfree(', node, '_out);\n', file=file,  end='', sep='')

            file.write('\n')
            file.write('\n')
            file.write('}')
            file.close()
                


            
            
         
           
if len(sys.argv) != 3:
    print("Неправильные аргументы")
    exit(1)

in_file = sys.argv[1]

out_file = sys.argv[2]

with open(in_file, "r") as file:
        data = json.load(file)

m_1 = module(data)

print(m_1.sort())

#print(m_1.node_weight)
#print(m_1.node_in_calc)

m_1.c_dump(out_file)


