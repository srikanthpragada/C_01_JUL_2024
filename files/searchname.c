#include <stdio.h>


void main(int argc, char * argv[])
{
   char name[20];
   char line[20];
   FILE * fp;
   char * p;
   int found = 0;

       if(argc < 2)
       {
         printf("Usage: searchname  name");
         exit(2);
       }

       fp = fopen("names.txt", "rt");


       while(1)
       {

            p = fgets(line, 20, fp);
            if(p == NULL)  // EOF
                break;

            // replace \n with \0
            line[ strlen(line) - 1] = '\0';

            // search for name
            if (stricmp(line, argv[1]) == 0)
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
