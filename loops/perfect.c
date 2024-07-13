// Take a number and check whether it is perfect number

#include <stdio.h>

void main()
{
   int num, i, total = 1;

       printf("Enter number :");
       scanf("%d",&num);


       for(i = 2; i <= num/2; i ++)
       {
           if (num % i == 0)
           {
               total += i;
           }
       }

       if(total == num)
         printf("Perfect number!");
       else
         printf("Not perfect number!");


}
