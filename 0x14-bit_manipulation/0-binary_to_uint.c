#include "main.h"
/**
 * binary_to_uint - convert binary to decimal.
 * @b: the binary number in string format
 * Description: convert binary to decimal
 * section header: the header of this function is header.h
 * Return: this return the convert number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int finalresult, basenumber;
	int j;

	finalresult = 0;
	j = 0;
	basenumber = 1;

	if (!b)
		return (0);

	while (*(b + j))
	{
		if (*(b + j) != '0' && *(b + i) != '1')
			return (0);
		j++;
	}
	for (j--; j >= 0; j--)
	{
		if (*(b + j) == '1')
			finalresult = finalresult + basenumber;
		basenumber = basenumber * 2;
	}

	return (result);
}
