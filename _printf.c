#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints to standard output according to a format
 * @format: a string representing the format to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format_specifier(&format, args);
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}

	va_end(args);
	return (count);
}
