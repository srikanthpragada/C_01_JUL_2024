#include <stdio.h>


void main()
{
   int marks, pos, rollno, count;
   FILE * fp;



       fp = fopen("marks.dat", "rb");
       if(fp == NULL)
       {
           printf("File could not be opened!");
           exit(1);
       }

       printf("Enter rollno :");
       scanf("%d",&rollno);

       pos = 1;
       while(1)
       {
            count = fread(&marks, sizeof(marks), 1, fp);
            if(count == 0)  // EOF
                break;

            if(pos == rollno) {
                 printf("%2d ", marks);
                 break;
            }

            pos ++;
       }

       fclose(fp);
}
