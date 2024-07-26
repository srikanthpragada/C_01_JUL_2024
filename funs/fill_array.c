// Fill array

#include <stdio.h>

void zero(int * a)
{
 int i;

    for(i = 0; i < 5; i ++)
         a[i] = 0;
}

void main()
{
   int arr[5];
   int i;


      zero(arr);


      for(i = 0; i < 5; i ++)
           printf("%d ", arr[i]);
}


