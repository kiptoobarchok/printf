#include "main.h"

/**
 * print_str - Prints a string.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed
 */

int print_str(va_list args)
{
	char *str;
	int count;

	str = va_arg(args, char *);

	count = _puts(str);

	return (count);
}
