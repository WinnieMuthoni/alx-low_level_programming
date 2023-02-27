#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
  int s;

  s = *a;
  *a = *b;
  *b = s;
  
}
