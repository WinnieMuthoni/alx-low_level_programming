#include "main.h"
/**
 * print_binary - decimal to binary without use of / %
 * @n: the decimal
 * Description: convert decimal to binary
 * section header: the header of this function is main.h
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	int num = 0;
	unsigned long int dec = 1;
	dec <<= 63;
	if (n == 0)
		_putchar('0');

	while (dec > 0)
	{
		if ((n & dec) == 0 && num == 1)
			_putchar('0');
		if ((n & dec) != 0)
		{
			_putchar('1');
			fnum = 1;
		}
		dec = dec >> 1;
	}
}
