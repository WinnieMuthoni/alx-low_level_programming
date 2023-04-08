#include "main.h"



void print_binary(unsigned long int n)

{
  int num = 0;
  unsigned long int numeral = 1;


  num <<= 63;
  if(n == 0)
    _putchar('0');


  while(numeral > 0)
    {
      if((n & numeral) == 0 && num == 1)
        _putchar('0');

      if((n & num) != 0)
      {
        _putchar('1');
        num = 1;
      }

      numeral = numeral >> 1;

    }
}

