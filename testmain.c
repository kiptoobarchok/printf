#include <stdio.h>
#include "main.h"

/**
 * main - entry point.
 *
 * Return: Nothing.
 */

int main(void)
{
	int len;

	len = _printf("Hello, ALX!\n");
	printf("Length: %d\n", len);

	 len = _printf("Character: %c\n", 'A');
	 printf("Length: %d\n", len);

	 len = _printf("String: %s\n", "Hello");
	 printf("Length: %d\n", len);

	 len = _printf("Percent: %%\n");
	 printf("Length: %d\n", len);

	 return (0);
}
