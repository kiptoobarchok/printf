#include "main.h"

int (*fmt(char c))(va_list args)
{
	printer printer[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt}  //print %
	};

	int i;
	for (i = 0; i < sizeof(printer)/ sizeof(printer[0]); i++)
		{
			if (printer[i].c == c)
			{
				return (printer[i].f);
			}
		}
	return (NULL);
}
