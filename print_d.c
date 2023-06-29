#include "main.h"

/**
 * print_d - prints integer and count number of digits.
 * @args: variable argument list.
 *
 * Return: value of x.
 */

int print_d(va_list args)
{
<<<<<<< HEAD
    int n = va_arg(args, int);
    int div;
    int count;
    unsigned int num;
   
    div = 1;
    count = 0;

    if (n < 0)
    {
        count += ('-');
        num = n * -1;
    }
    else
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
=======
	int a = va_arg(args, int);
	unsigned int n = (a < 0) ? -a : a;
	unsigned int x = 1;

	while (n / 10)
	{
		n = n / 10;
		x++;
	}

	digit_print(a, 0);
	return (x);
}

/**
 * digit_print - recursive funcion to print integer digits.
 * @c: integer.
 * @count: current count of digits.
 *
 * Return: count.
 */

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

	return (count);
>>>>>>> 119ca5e4bda0cbcb915affa615d0d0780d19af22
}

