// Fill array

#include <stdio.h>

void main()
{
   int a[10], i;



      for(i = 0; i < 10; i ++)
      {
        printf("Enter a number :");
        scanf("%d", &a[i]);
      }

      for(i = 0; i < 10; i ++)
      {
        printf("%5d", a[i]);
      }


}
