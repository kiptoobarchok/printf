#include "main.h"

int print_d(va_list args)
{
	int n = va_arg(args, int);
    int div;
    int count;
   
    div = 1;
    count = 0;

    if (n < 0)
    {
        count += _putchar('-');
        n *= -1;
    }

    for (; n / div > 9; )
        div *= 10;

    for (; div != 0; )
    {
        count += _putchar('0' + n / div);
        n %= div;
        div /= 10;
    }
    return count;
}

int print_unsigned_number(unsigned int n)
{
    int div;
    int count;
    unsigned int num;

    div = 1;
    count = 0;

    num = n;

    for (; num / div > 9; )
        div *= 10;

    for (; div != 0; )
    {
        count += _putchar('0' + num / div);
        num %= div;
        div /= 10;
    }

    return count;
}
 
