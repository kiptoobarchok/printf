#include <stdio.h>

extern int print_format(const char *format, ...);

/**
 * main - entry point.
 *
 * Return: 0.
 */

int main(void)
{
	int num = 50;
	int result = print_format("This is a number: %d\n", num);

	printf("Number of characters printed: %d\n", result);
	return (0);
}
