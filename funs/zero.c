// Pass by value

#include <stdio.h>

void zero(int num)
{
    num = 0;
}

void main()
{
   int a = 100;

      zero(a);

      printf("%d", a);
}


