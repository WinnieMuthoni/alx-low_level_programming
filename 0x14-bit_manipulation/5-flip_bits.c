#include "main.h"
/**
 * flip_bits - count the bit to change to another value
 * @n: the number
 * @m: the number to compare
 * Description: compare to ints a count the diferences in bits
 * section header: the header of this function is main.h
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;

	j = 0;
	n = n ^ m;
	while (n)
	{
	       j += n & 1;
		n >>= 1;
	}
	return (j);
}
