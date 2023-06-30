#include "main.h"
#include <stdio.h>

/**
 * print_p - Prints a pointer argument in hexadecimal format
 * @args: The va_list arguments.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	void *ptr;
	unsigned long int address;
	int count = 0;

	ptr = va_arg(args, void *);

	if (!ptr)
	{
		/* No need for nil_string variable */
		return (_puts("(nil)"));
	}

	address = (unsigned long int)ptr;
	count += _puts("0x");
	print_hex(address, 1);

	return (count);
}
