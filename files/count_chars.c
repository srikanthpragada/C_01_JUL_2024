#include <stdio.h>


void main()
{
   char ch;
   char filename[50];
   FILE * fp;
   int alpha = 0, digit = 0, other = 0;

       printf("Enter filename :");
       gets(filename);


       fp = fopen(filename, "rt");
       if(fp == NULL)  // open failed
       {
           printf("Sorry! Could not open %s file!", filename);
           exit(1);
       }


       while(1)
       {
           ch = fgetc(fp);
           if(ch == EOF)  // end of file
              break;

           if(isalpha(ch))
               alpha ++;
           else
            if(isdigit(ch))
                digit ++;
            else
                other ++;

       }

       printf("Alpha = %d, Digits = %d, Others = %d", alpha, digit, other);

       fclose(fp);
}
