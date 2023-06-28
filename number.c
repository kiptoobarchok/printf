#include "main.h"

int print_digit(int i)
{
	unsigned int count;

	if (i < 0)
	{
		i *= -1;
	}

	while ( i / 10)
	{
		print_digit (i / 10);
		count++;
	}
	_putchar ((i % 10) + '0');

	return (count);
}
