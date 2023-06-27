#include <stdio.h>

int _puts(const char *str)
{
	int chars_written = 0;

	if (!*str)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		chars_written++;
	}
	putchar('\n');

	chars_written++;

	return chars_written;
}

