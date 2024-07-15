// Print a char is uppercase

#include <stdio.h>

void main()
{
   char ch, i, count = 0;


      for(i = 1; i <= 5; i ++)
      {
        printf("\nEnter a char :");
        ch = getche();

        if(isdigit(ch))
             count ++;

      } // for

      printf("\nCount = %d", count);
}
