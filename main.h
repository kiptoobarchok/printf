#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int print_unsigned_number(unsigned int n);
int print_number(va_list args);
int print_d(va_list args);
int _printf(const char  *format, ...);
int digit_print(int c, int count);
int _putchar(char c);
int _puts(const char *str);

int print_char(va_list);
int print_str(va_list);
int print_pcnt(va_list);


/**
 * struct printer - template to define format specifier.
 * @c: format specifier.
 * @f: pointer to a function to print format specifier.
 *
 */

typedef struct printer
{
	char c;
	int (*f)(va_list args);
}  printer;

int (*fmt(char c))(va_list args);

#endif
