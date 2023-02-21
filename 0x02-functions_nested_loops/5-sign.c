#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        print_number(n);
    }
    else if (n == 0)
    {
        _putchar('0');
    }
    else
    {
        _putchar('-');
        print_number(-n);
    }
}
