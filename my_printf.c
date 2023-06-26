#include <stdarg.h>
#include <stdio.h>

int _printf(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0;
	char c;
	const char* s;

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c') {
                c = (char)va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's') {
                s = va_arg(args, const char*);
                while (*s) {
                    putchar(*s);
                    s++;
                    count++;
                }
            }
            else if (*format == '%') {
                putchar('%');
                count++;
            }
        }
        else {
            putchar(*format);
            count++;
        }
        
        format++;
    }
    
    va_end(args);
    
    return count;
}

