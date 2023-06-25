#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - function that produces output.
 * @format: character string
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int n = 0;

	char *str;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					{
						int c = va_arg(arg, int);
						putchar(c);
						n++;
						break;
					}
			
				default:
					{
						putchar('%');
						putchar(*format);
						n += 2;
						break;
					}
			}
		}
		else
		{
			putchar(*format);
			n++;
		}

		format++;
	}

			va_end(arg);

			return (n);
}
