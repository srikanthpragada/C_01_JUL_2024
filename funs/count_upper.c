// Count uppercase letters

#include <stdio.h>

int counter_upper(char st[30])
{
  int i, count = 0;

     for(i = 0;  st[i] != '\0'; i ++)
     {
         if(isupper(st[i]))
               count ++;
     }

     return count;
}


void main()
{
    char name[30];

      printf("%d ", counter_upper("This is FINE"));
      printf("%d ", counter_upper(name));
}
