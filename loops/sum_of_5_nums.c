// Take 5 nums and displays total

#include <stdio.h>

void main()
{
   int num,i, total = 0;


       for(i = 1; i <= 5; i ++)
       {
          printf("Enter number :");
          scanf("%d",&num);
          total = total + num;
       }

       printf("Total = %d", total);

}
