
.PHONY: all clean coverage annotate

all:
	verilator -Wno-lint --binary --vpi tb.sv sample.cpp -o add_test

coverage:
	verilator -Wno-lint --binary --vpi --coverage tb.sv sample.cpp -o add_test

annotate:
	verilator_coverage --annotate-all --filter-type "*n*" coverage.dat --annotate coverage_report

clean:
	rm -rf obj_dir
	rm -f coverage.dat
	rm -rf coverage_report