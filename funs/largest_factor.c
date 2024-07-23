#include <stdio.h>

int largest_factor(int num)
{
  int i;

     for(i = num/2; i >= 1; i --)
     {
         if(num % i == 0)
             return i;
     }
}


void main()
{

    printf("%d ", largest_factor(255));
    printf("%d ", largest_factor(1283));
}
