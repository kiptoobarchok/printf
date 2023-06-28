#include "main.h"

int print_str(va_list args)
{
	char *str;
	int count;

	str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}

	count = _puts(str);

	return (count);
}
