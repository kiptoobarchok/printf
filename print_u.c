#include "main.h"

/**
 * print_u - Prints an unsigned integer.
 * @args: va_list arguments
 *
 * Return: count.
 */

int print_u(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num = n;
	int last = num % 10;
	int digit, exp = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		count++;
	}

	while (num / 10 > 0)
	{
		exp *= 10;
		num /= 10;
	}

	num = n;

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		count++;
	}

	_putchar(last + '0');
	count++;

	return (count);
}
