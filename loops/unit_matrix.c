// Unit Matrix

#include <stdio.h>

void main()
{
   int i,j;


       for(i = 1; i <= 5; i ++)
       {

            for(j = 1; j <= 5; j ++)
            {
                if(i == j)
                   printf("%5d",1);
                else
                   printf("%5d",0);
            }

            printf("\n");
       }



}
