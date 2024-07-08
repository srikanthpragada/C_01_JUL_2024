// Take marks and display grade

#include <stdio.h>

void main()
{
  int marks;

     printf("Enter marks :");
     scanf("%d", &marks);

     if(marks > 80)
         printf("A");
     else
        if(marks > 60)
           printf("B");
        else
           printf("C");

}
