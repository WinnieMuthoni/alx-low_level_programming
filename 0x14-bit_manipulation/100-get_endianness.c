#include "main.h"
/**
 * get_endianness - get the endiannes of the arch
 * Description: get the endiannes of the arch
 * section header: the header of this function is main.h
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *)&j;

	if (*c)
		return (1);
	return (0);
}
