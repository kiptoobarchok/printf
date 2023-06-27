#include "main.h"

/**
 * _puts - Prints a string.
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */

int _puts(const char *str)
{
	int chars_written = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		chars_written++;
	}
	return (chars_written);
}
