#include "main.h"

/**
  *main- entry point to the program
  *Return: 0
  */

int main(void)
{
	char a = 'A';
	char *name = "Alx";

	_printf("%c\n", a);
	_printf("%s\n", (*name));

	return (0);
}
