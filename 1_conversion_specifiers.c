#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_integer - produces output according to format.
 * @num: integer.
 *
 * Return: Nothing.
 */

int print_integer(int num)
{
	return (printf("%d", num));
}

/**
 * print_format -  produces output according to a format.
 * @format: format string.
 *
 * Return: Nothing.
 */

int print_format(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int num;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'd')
		{
			num = va_arg(args, int);
			printed_chars += print_integer(num);
			format += 2;
		}

		else if (*format == '%' && *(format + 1) == 'i')
		{
			num = va_arg(args, int);
			printed_chars += print_integer(num);
			format += 2;
		}

		else
		{
			putchar(*format);
			printed_chars++;
			format++;
		}
	}

	va_end(args);

	return (printed_chars);
}
