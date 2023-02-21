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
	int sign = 0;

	if (n > 0)
	{
		sign = 1;
		putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		putchar('-');
	}
	else
	{
		sign = 0;
		putchar('0');
	}

	return (sign);
}
