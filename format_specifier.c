#include "main.h"

int (*fmt(char c))(va_list args)
{
	printer printer[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt}
	};

	int i;
	int n = 3;
	for (i = 0; i < n; i++)
		{
			if (printer[i].c == c)
			{
				return (printer[i].f);
			}
		}
	return (NULL);
}
