#include <stdio.h>


void main(int argc, char * argv[])
{
   char line[120];
   FILE * fp;
   char * p;
   int lineno = 1;

       if(argc < 2)
       {
         printf("Usage: printfile  filename");
         exit(1);
       }

       fp = fopen(argv[1], "rt");
       if(fp == NULL)
       {
           printf("File not found!");
           exit(2);
       }


       while(1)
       {

            p = fgets(line, 20, fp);
            if(p == NULL)  // EOF
                break;

            printf("%3d:%s", lineno, line);
            lineno ++;
       }
}
