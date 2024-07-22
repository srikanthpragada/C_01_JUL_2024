// Take 5 strings and display the biggest

#include <stdio.h>

void main()
{
   char st[50], biggest[50];
   int i;


    strcpy(biggest,""); // Empty string

    for (i=1; i <= 5;i++)
    {
        printf("Enter a string:");
        gets(st);

        if(strcmp(st, biggest) > 0)
            strcpy(biggest, st);
    }

    printf("Biggest = %s", biggest);
}
