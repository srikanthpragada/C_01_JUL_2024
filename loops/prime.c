// Take a number and check whether it is prime number

#include <stdio.h>

void main()
{
   int num, i, prime = 1;

       printf("Enter number :");
       scanf("%d",&num);


       for(i = 2; i <= num/2; i ++)
       {
           if (num % i == 0)
           {
               prime = 0;
               printf("Not prime!");
               break;
           }
       }

       if(prime)
         printf("Prime number!");


}
