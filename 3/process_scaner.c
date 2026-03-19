#include <vpi_user.h>
#include <stdlib.h>
#include <string.h>

static void pocess_scaner(p_cb_data cb_data) {
    vpiHandle module_h, iter, proc_h;
    int type;
    const char *type_str;

    if ( cb_data.user_data == NULL) {
        vpi_printf("ERROR: Добавьте название модуля в виде аргумента (+task=...).\n");
        vpi_control(vpiFinish, 1);
        return;
    }

    module_h = vpi_handle_by_name(cb_data.user_data, NULL);
    if (module_h == NULL) {
        vpi_printf("ERROR: Модуль '%s' не найден.\n", cb_data.user_data);
        vpi_control(vpiFinish, 1);
        return;
    }

    if (vpi_get(vpiType, module_h) != vpiModule) {
        vpi_printf("ERROR: '%s' не является модулем.\n", cb_data.user_data);
        vpi_control(vpiFinish, 1);
        vpi_free_object(module_h);
        return;
    }

    iter = vpi_iterate(vpiProcess, module_h);
    if (iter == NULL) {
        vpi_printf(" В модуле %s нет процессов.\n", cb_data.user_data);
    } else {
        vpi_printf("Процессы в модуле %s:\n", cb_data.user_data);
        while ((proc_h = vpi_scan(iter)) != NULL) {
            char *full_name = vpi_get_str(vpiFullName, proc_h);
            type = vpi_get(vpiType, proc_h);
            switch (type) {
                case vpiAlways:      type_str = "always";      break;
                case vpiInitial:     type_str = "initial";     break;
                case vpiFinal:       type_str = "final";       break;
                case vpiAlwaysComb:  type_str = "always_comb"; break;
                case vpiAlwaysFF:    type_str = "always_ff";   break;
                case vpiAlwaysLatch: type_str = "always_latch";break;
                default:             type_str = "unknown";     break;
            }
            vpi_printf("  %s : %s\n", full_name, type_str);
            vpi_free_object(proc_h);
        }
        vpi_free_object(iter);
    }

    vpi_free_object(module_h);
    free(cb_data.user_data);
    vpi_control(vpiFinish, 1);
}

void vlog_startup_routines(void) {
    char* module_name == calloc(1024, sizeof(char));

    s_vpi_vlog_info vlog_info;
    int i;
    int arg_is_real = 0;

    if (!vpi_get_vlog_info(&vlog_info)) {
        return 0;
    }

    for (i = 0; i < vlog_info.argc; i++) {
        if (strncmp(vlog_info.argv[i], "+task=", strlen("+task=")) == 0) {
            strncpy(module_name, vlog_info.argv[i] + strlen("+task="), max_len);
            module_name[max_len - 1] = '\0';
            arg_is_real = 1
        }
    }

    if (arg_is_real == 0)
    {
        free(module_name);
        module_name = NULL;
    }


    s_cb_data cb_data;
    vpiHandle cb_h;

    cb_data.reason = cbStartOfSimulation;
    cb_data.cb_rtn = pocess_scaner;
    cb_data.obj = NULL;


    cb_data.time = NULL;
    cb_data.value = NULL;
    cb_data.user_data = module_name;

    cb_h = vpi_register_cb(&cb_data);
    vpi_free_object(cb_h);


}