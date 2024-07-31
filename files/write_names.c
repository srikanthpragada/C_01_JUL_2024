#include <stdio.h>


void main()
{
   char names[][20] = {"Mark", "Andy","Joe", "Allen", "Scott"};
   FILE * fp;
   int i;


       fp = fopen("names.txt", "wt");
       if(fp == NULL)  // open failed
       {
           printf("Sorry! Could not open [names.txt] file!");
           exit(1);
       }


       for(i = 0; i < 5; i ++)
           fprintf(fp, "%s\n", names[i]);


       fclose(fp);
}
