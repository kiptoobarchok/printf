#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
  *_printf- printf implementation of %s
  *@format: character string
  *@Return:  number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int n = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 's':
					{
						char *x = va_arg(args, char *);
						fputs(x, stdout);
						n += strlen(x);
						break;
					}

				default:
					putchar('\0');
					putchar(*format);
					n += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			n++;
		}
		format++;
	}
	
	va_end(args);
	return (n);
}
