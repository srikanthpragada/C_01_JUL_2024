// Count even numbers

#include <stdio.h>

void main()
{
   int num,i, count = 0;


       for(i = 1; i <= 5; i ++)
       {
          printf("Enter number :");
          scanf("%d",&num);

          if(num % 2 == 0)
             count ++;
       }

       printf("Count = %d", count);

}
