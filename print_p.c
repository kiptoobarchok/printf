#include "main.h"
#include <stdio.h>

/**
 * print_p - Prints a pointer argument in hexadecimal format
 * @args: A va_list containing the pointer argument
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	void *ptr = va_arg(args, void *);

	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hex(address);

	return (count);
}

/**
 * print_hex - Prints a hexadecimal number
 * @n: The number to be printed
 *
 * Return: The number of characters printed
 */

int print_hex(unsigned long int n)
{
	char hex_digits[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
		count += print_hex(n / 16);

	count += _putchar(hex_digits[n % 16]);

	return (count);
}
