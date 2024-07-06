// Take two numbers and display relationship

#include <stdio.h>

void main()
{
  int a, b;

     printf("Enter two numbers :");
     scanf("%d%d", &a, &b);

     if(a == b)
        printf("Equal");
     else
       if(a > b)
           printf("First is bigger");
       else
           printf("Second is bigger");

}
