#include <stdio.h>


void main()
{
   int marks, i;
   FILE * fp;


       fp = fopen("marks.dat", "wb");
       if(fp == NULL)
       {
           printf("File could not be opened!");
           exit(1);
       }


       srand(time(0));

       for(i = 1; i <= 50; i ++)
       {
            marks = rand() % 100;
            fwrite(&marks, sizeof(marks), 1, fp);
       }

       fclose(fp);
}
