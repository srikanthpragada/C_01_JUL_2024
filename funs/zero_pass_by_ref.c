// Pass by address/reference

#include <stdio.h>

void zero(int * p)
{
    *p = 0;
}

void main()
{
   int a = 100;

      zero(&a); // pass address of a

      printf("%d", a);
}


