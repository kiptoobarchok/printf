#include <stdio.h>

int _puts(const char *str)
{
	int chars_written = 0;

	while (*str)
	{
		putchar(*str);
		str++;
		chars_written++;
	}
	return chars_written;
}

