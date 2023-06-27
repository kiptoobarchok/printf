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

	const char *p;

	va_list args;

	int (*f)(va_list args);
	
	p = format;

	va_start(args, format);

	for (; *p ; p++)
	{
		if (*p != '%')
		{
			count += _putchar(*p);
			continue;
		}

		p++;
		
		f = fmt(*p);

		count += f ? f(args) : _printf("%%%c", *p);

	}
	va_end(args);

	return (count);
}
