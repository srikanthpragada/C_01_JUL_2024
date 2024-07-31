#include <stdio.h>


void main()
{
   char name[20];
   char line[20];
   FILE * fp;
   char * p;
   int found = 0;

       fp = fopen("names.txt", "rt");

       printf("Enter name :");
       gets(name);

       while(1)
       {

            p = fgets(line, 20, fp);
            if(p == NULL)  // EOF
                break;

            // replace \n with \0
            line[ strlen(line) - 1] = '\0';

            // search for name
            if (stricmp(line, name) == 0)
            {

                printf("Found name!");
                found = 1;
                break;
            }

       }

       if(!found)
           printf("Sorry! Name not found!");

       fclose(fp);
}
