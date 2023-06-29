#include "main.h"

int print_d(va_list args)
{
    int a = va_arg(args, int);
    unsigned int n = (a < 0) ? -a : a;
    unsigned int x = 1;

    while (n / 10)
    {
        n = n / 10;
        x++;
    }

    digit_print(a, 0);
    return x;
}

int digit_print(int c, int count)
{
    if (c < 0)
    {
        _putchar('-');
        c = -c;
    }

    if (c / 10)
    {
        count = digit_print(c / 10, count);
    }

    _putchar((c % 10) + '0');
    count++;

    return count;
}

