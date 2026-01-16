#include <iostream>
#include <iomanip>
#include <math.h>

#include <vpi_user.h>
using namespace std;

extern "C"{
	unsigned int float_add(unsigned int a, unsigned int b)
	{
		float f = 0;

		f = *(float*)&a + *(float*)&b;

		vpi_printf("From model: %e (%x) add %e (%x) = %e (%lx)\n", *(float*)&a, a, *(float*)&b, b, f, *(int*)&f);
		return *(int*)&f;
	}

	unsigned int float_cmp(unsigned int a, unsigned int b)
	{
		if((*(float*)&a == *(float*)&b) | (isnan(*(float*)&a) == isnan(*(float*)&b)))
			return 1;
		else
			return 0;
	}

	void tr_print (unsigned int a, unsigned int b, unsigned int semp, unsigned int res, unsigned int cmp_res)
	{
		vpi_printf("From RTL: ");
		if(cmp_res)
			vpi_printf("OK: ");
		else
			vpi_printf("ERROR: ");
		vpi_printf("%e (%x) add %e (%x) = %e (%lx) vc %e (%lx)\n", *(float*)&a, a, *(float*)&b, b, *(float*)&semp, semp, *(float*)&res, res);
	} 
}