#include "main.h"

/**
 * print_d - prints integer and count number of digits.
 * @args: variable argument list.
 *
 * Return: value of x.
 */

int print_d(va_list args)
{
	int a = va_arg(args, int);
	unsigned int n = (a < 0) ? -a : a;
	unsigned int x = 1;

	while (n / 10)
	{
		n = n / 10;
		x++;
	}

	digit_print(a, 0);
	return (x);
}

/**
 * digit_print - recursive funcion to print integer digits.
 * @c: integer.
 * @count: current count of digits.
 *
 * Return: count.
 */

int digit_print(int c, int count)
{
	if (c < 0)
	{
		_putchar('-');
		c = -c;
	}

	if (c / 10)
	{
		count = digit_print(c / 10, count);
	}

	_putchar((c % 10) + '0');
	count++;

	return (count);
}

