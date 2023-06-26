#include "main.h"
#include <stdarg.h>

/**
 * handle_format_specifier - handles a single format specifier in a string
 * @format: a pointer to the current position in the format string
 * @args: the argument list
 *
 * Return: the number of characters printed for the specifier
 */

int handle_format_specifier(const char **format, va_list args)
{
	int count = 0;

	char spec = **format;
	(*format)++;

	if (spec == 'c')
	{
		count += _putchar(va_arg(args, int));
	}
	else if (spec == 's')
	{
		char *str = va_arg(args, char *);

		count += _printstr(str);
	}

	return (count);
}
