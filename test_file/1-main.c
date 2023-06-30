#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;
    int num = -998;

    len = _printf("Length:[%d, %i]\n", num, num);
    len2 = printf("Length:[%d, %i]\n", num, num);
    printf("len: %d,  len2: %d\n", len, len2);

    return (0);
}
