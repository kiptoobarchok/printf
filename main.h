#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char* format, ...);

int _putchar(char c);
int _puts(const char *str);

int print_char(va_list);
int print_str(va_list);
int print_pcnt(va_list);

typedef struct printer
{
	char c;
	int (*f)(va_list args);
}printer;

int (*fmt(char c))(va_list args);

#endif
