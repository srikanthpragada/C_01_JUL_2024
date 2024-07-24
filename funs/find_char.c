// Find pos of char in the string

#include <stdio.h>

int find(char st[30], char ch)
{
  int i;

     for(i = 0;  st[i] != '\0'; i ++)
     {
         if(st[i] == ch)
             return i;
     }

     return -1;
}


void main()
{
    char name[30];

      printf("%d ", find("hello", 'l'));
      printf("%d ", find("programming", 'b'));
}
