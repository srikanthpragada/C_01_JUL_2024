#include <stdio.h>


void main()
{
   char ch;
   FILE * fp;

       fp = fopen("upper.txt", "rt");


       while(1)
       {
           ch = fgetc(fp);
           if(ch == EOF)  // end of file
              break;

           putch(ch);
       }


       fclose(fp);
}
