// Count no. of alphabets and non-alpha

#include <stdio.h>

void main()
{
   char ch, i, alpha_count = 0;


      for(i = 1; i <= 10; i ++)
      {
        printf("\nEnter a char :");
        ch = getche();

        if(isalpha(ch))
             alpha_count ++;

      } // for

      printf("\nAlpha Count     = %d", alpha_count);
      printf("\nNon-Alpha Count = %d", 10 - alpha_count);
}
