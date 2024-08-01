// Random Access

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

       pos = (rollno - 1) * sizeof(int);

       fseek(fp, pos, SEEK_SET); // move from the beginning

       count = fread(&marks,sizeof(marks),1, fp);

       if(count == 1)
           printf("Marks : %2d ", marks);
       else
           printf("Sorry! Rollno not found!");


       fclose(fp);
}
