#include "main.h"

/**
 * print_hex - Prints an unsigned integer in Hex
 * @args: va_list arguments.
 *
 * Return: counter.
 */

int print_hex(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp /= 16;
		counter++;
	}

	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = num % 16;
		num /= 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] <= 9)
		{
			_putchar(array[i] + '0');
		}
		else
		{
			_putchar(array[i] - 10 + 'A');
		}
	}

	free(array);
	return (counter);
}
