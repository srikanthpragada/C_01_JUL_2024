// Take string and display word per line

#include <stdio.h>

void main()
{
   char st[50];
   int i;

    printf("Enter a string:");
    gets(st);

    for (i=0; st[i] !='\0';i++)
        ;


    for(i--; i >= 0; i --)
         putch(st[i]);

}
