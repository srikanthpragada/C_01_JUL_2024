// Compare arrays

#include <stdio.h>

int compare(int a[5], int b[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
         if(a[i] != b[i])
           return 0;
     }

     return 1;
}


void main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {2,2,3,4,5};

      printf("%d ", compare(a1, a2));
}
