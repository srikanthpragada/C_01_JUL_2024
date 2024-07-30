#include <stdio.h>


void main()
{
   char ch;
   FILE * fp;

       fp = fopen("upper.txt", "wt");


       for(ch = 65; ch <= 90; ch ++)
       {
           fputc(ch,fp);
       }

       fclose(fp);
}
