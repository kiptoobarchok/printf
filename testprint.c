#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _putchar(int c);

/**
 * _printf - Produces output according to a format.
 * @format: format string.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, len;
	va_list ap;

	va_start(ap, format);

	for (i = 0, len = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
					len += _putchar(va_arg(ap, int));
				break;

				case 's':
				{
					const char *str = va_arg(ap, const char *);
					int j;

					for (j = 0; str[j]; j++)
						len += _putchar(str[j]);
					break;
				}
				case '%':
				len += _putchar('%');
				break;

				default:
				len += _putchar(format[i]);
				break;
			}
		}
		else
		{
			len = _putchar(format[i]);
		}
	}

	va_end(ap);

	return (len);
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, returns the number of characters written.
 */

int _putchar(int c)
{
	return (putchar(c));
}
