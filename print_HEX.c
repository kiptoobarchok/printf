#include "main.h"

/**
 * print_HEX - prints an unsigned integer in hexadecimal format.
 * @args: va_list arguments.
 *
 * Return: count.
 */

int print_HEX(va_list args)
{
	int i;
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);

	unsigned int b = n;
	int *array;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}

	count++;

	array = malloc(count * (sizeof(int)));

	for (i = 0; i < count; i++)
	{
		array[i] = b % 16;
		b /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 7;
		}
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}
