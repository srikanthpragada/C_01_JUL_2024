#include <stdio.h>


void main()
{
   int marks, i, count;
   FILE * fp;



       fp = fopen("marks.dat", "rb");
       if(fp == NULL)
       {
           printf("File could not be opened!");
           exit(1);
       }

       while(1)
       {
            count = fread(&marks, sizeof(marks), 1, fp);
            if(count == 0)  // EOF
                break;

            printf("%2d ", marks);

       }

       fclose(fp);
}
