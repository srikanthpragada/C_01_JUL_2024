// Fill array of 5 X 5

#include <stdio.h>

void main()
{
   int a[5][5], i, j;


      srand(time(0));

      for(i = 0; i < 5; i ++)
      {

       for(j = 0; j < 5; j ++)
       {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
       }

       printf("\n");
     }
}
