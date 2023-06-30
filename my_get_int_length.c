#include "main.h"

/**
 * get_int_length - Calculates the length of an integer when printed given base
 * @n: The integer
 * @base: The base
 *
 * Return: The length of the integer
 */

int get_int_length(unsigned long int n, int base)
{
	int length = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		n /= base;
		length++;
	}

	return (length);
}
