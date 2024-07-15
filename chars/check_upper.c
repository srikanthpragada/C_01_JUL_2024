// Print a char is uppercase

#include <stdio.h>

void main()
{
   char ch;



      printf("Enter a char :");
      scanf("%c", &ch);

      if(ch >= 65 && ch <= 90)
          printf("Uppercase");
      else
          printf("Non uppercase");

}
