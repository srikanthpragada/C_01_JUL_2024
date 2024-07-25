#include <stdio.h>

void reverse(int num)
{

    printf("%d ", num);
    if(num > 1)
      reverse(num - 1);  // recursion
}

void main()
{
   reverse(5);
}


