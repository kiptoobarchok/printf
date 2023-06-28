#include "main.h"

int digit(va_list args)
{
	unsigned int a;
	int b;

	a = va_arg(args, int);

	b = return_value(a);

	return (b);
}

