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

		vpi_printf("From model: %.3e (%x) add %.3e (%x) = %.3e (%lx)\n", *(float*)&a, a, *(float*)&b, b, f, *(int*)&f);
		return *(int*)&f;
	}

	unsigned int float_cmp(unsigned int a, unsigned int b)
	{
		if((*(float*)&a == *(float*)&b) | (isnan(*(float*)&a) == isnan(*(float*)&b)))
			return 1;
		else
			return 0;
	}
}