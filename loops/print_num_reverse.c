// Print a number in reverse order

#include <stdio.h>

void main()
{
   int num;

       printf("Enter number :");
       scanf("%d",&num);


       while(num > 0)
       {
          printf("%d", num % 10);
          num = num / 10;
       }
}
