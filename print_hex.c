#include "main.h"

/**
 * print_hex - Prints an unsigned integer in Hex
 * @n: Integer to print.
 * @base: number used for representation.
 *
 * Return: Number of characters printed
 */

int print_hex(unsigned long int n, int base)
{
	unsigned long int e, f;
	int count = 0;

	if (n <= 9)
	{
		_putchar(n + '0');
		count++;
		return (count);
	}

	if (n <= 15)
	{
		_putchar((n - 10) + (base ? 'a' : 'A'));
	count++;
	return (count);
	}

	e = n / 16;
	f = n % 16;
	count += print_hex(e, base);

	if (f <= 9)
	{
	_putchar(f + '0');
	count++;
	}
	else
	{
	_putchar((f - 10) + (base ? 'a' : 'A'));
	count++;
	}

	return (count);
}
