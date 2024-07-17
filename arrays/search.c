// Fill array with random numbers and search for a number

#include <stdio.h>

void main()
{
   int a[10], i, num, found = 0;


      srand(time(0));

      for(i = 0; i < 10; i ++)
      {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
      }


      printf("\nEnter a number :");
      scanf("%d",&num);

      for(i = 0; i < 10; i ++)
      {
        if(a[i] == num)
        {
            printf("Found at %d", i);
            found = 1;
            break;
        }
      }


      if(!found)
         printf("Sorry! Number not found!");



}
