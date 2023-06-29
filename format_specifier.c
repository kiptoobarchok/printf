#include "main.h"

/**
 * fmt - Selects the appropriate printing function based on format specifier.
 * @c: The format specifier character.
 *
 * Return: POinter to corresponding printing function.
 */

int (*fmt(char c))(va_list args)
{
	printer printer[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt},
		{'d', print_d},
		{'i', print_d}
	};

	int i;
	int n = 5;

	for (i = 0; i < n; i++)
	{
		if (printer[i].c == c)
		{
			return (printer[i].f);
		}
	}

	return (NULL);
}
