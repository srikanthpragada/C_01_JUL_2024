// Count no. of occurrences of a number in an array

#include <stdio.h>

int counter(int a[10], int num)
{
  int i, count = 0;

     for(i = 0;  i < 10; i ++)
     {
         if(a[i] == num)
             count ++;
     }

     return count;
}


void main()
{
    int a[] = {1,2,3,4,4,5,5,6,6,7};


      printf("%d ", counter(a,8));
}
