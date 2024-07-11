// Print even numbers from given number to given number


#include <stdio.h>

void main()
{
   int start, end, i;

       start = 25;
       end = 50;

       start = start % 2 == 0 ? start : start + 1;

       for(i = start; i <= end; i += 2)
       {
           printf("%d ",i);
       }
}
