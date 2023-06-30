#include "main.h"
#include <stdio.h>

/**
 * print_p - Prints a pointer argument in hexadecimal format
 * @args: The va_list arguments.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	int count;
	void *ptr;
	char *str = "(null)";
	int i;
	unsigned long int address = va_arg(args, unsigned long int);

	ptr = va_arg(args, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');

	count = print_X(address);

	return (count + 2);
}

int print_X(unsigned long int n)
{
    int i;
    int count;
    unsigned int a = n;

    int *array;
    count = 0;

    while (n / 16 != 0)
    {
        n /= 16;
        count++;
    }
    array = malloc(count * sizeof(int));

    for (i = 0; i < count; i++) {
        array[i] = a % 16;
        a /= 16;
    }
    for (i = count - 1; i >= 0; i--) {
        if (array[i] > 9) {
            array[i] += 7;
        }
        _putchar(array[i] + '0');
    }

    free(array);
    return count;
}

