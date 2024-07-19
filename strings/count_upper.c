// Take name and display no. of uppercase letters

#include <stdio.h>

void main()
{
   char name[30];
   int i,count=0;

    printf("Enter a name:");
    gets(name);

    for (i=0; name[i] !='\0';i++)
    {
      if (isupper(name[i]))
          count++;
    }

    printf("Upper count : %d",count);
}
