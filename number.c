#include "main.h"

int return_value(int i)
{
	unsigned int count;

	if (i < 0)
	{
		i *= -1;
	}

	while ( i / 10)
	{
		return_value(i / 10);
		count++;
	}
	_putchar ((i % 10) + '0');

	return (count);
}
