#include "main.h"

/**
 *return one bit
 *@index: the position to read the bit
 *@n: the bit number
 *Description: the position to read the bit
 *Retun: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)

{
unsigned long int bit;

if (index > 64)
return (-1);
bit = n >> index;
return (bit & 0x1);
}
