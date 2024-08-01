#include <stdio.h>


void main()
{
   char source[30], target[30];
   int ch;
   FILE * sfp, *tfp;
   char * p;
   int lineno = 1;

       printf("Enter source file :");
       gets(source);

       printf("Enter target file :");
       gets(target);


       sfp = fopen(source, "rt");
       if(sfp == NULL)
       {
           printf("Source file not found!");
           exit(1);
       }

       tfp = fopen(target, "wt");
       if(tfp == NULL)
       {
           printf("Target file not found!");
           exit(1);
       }


       while(1)
       {

            ch = fgetc(sfp);
            if (ch == EOF)
                break;

            fputc(ch,tfp);
       }

       fclose(sfp);
       fclose(tfp);
}
