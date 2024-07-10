// Print numbers from 1 to given num

#include <stdio.h>

void main()
{
   int n, num;

       printf("Enter number :");
       scanf("%d",&num);

       for(n = 1; n <= num; n++)
       {
           printf("%d ", n);
       }
}
