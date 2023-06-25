#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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

	va_start(args, format);
