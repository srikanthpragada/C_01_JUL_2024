// Count words in a string

#include <stdio.h>

int counter_words(char st[30])
{
  int i, count = 0;

     for(i = 0;  st[i] != '\0'; i ++)
     {
         if(st[i] == ' ')
             count ++;
     }

     return count + 1;
}


void main()
{
    char name[30];

      printf("%d ", counter_words("This is FINE"));
}
