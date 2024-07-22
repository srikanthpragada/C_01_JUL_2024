// Take 5 strings and print them in reverse order

#include <stdio.h>

void main()
{
   char names[5][30];  // Array of 5 strings
   int i;


    for (i= 0; i < 5; i++)
    {
        printf("Enter a string:");
        gets(names[i]);
     }


    for (i= 0; i < 5; i++)
    {
        puts(strrev(names[i]));

    }

}
