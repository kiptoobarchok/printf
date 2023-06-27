#include "main.h"

/**
 * print_char - Prints a character.
 * @args: A va_list containing the argument to print
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);

	return (1);
}
