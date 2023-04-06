#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
  int i, bit;
  for (i = (sizeof(unsigned long int) * 8) - 1; i>=0; i--)
    {
      bit = (n >> i) & 1;
      printf("%d",bit);
    }
}
int main()
{
  unsigned long int n = 42;
  print_binary(n);
  return o;
}
