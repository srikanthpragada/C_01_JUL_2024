// Fill array of 5 X 5 with random numbers and display row totals

#include <stdio.h>

void main()
{
   int a[5][5], i, j, sn, found = 0;


      srand(time(0));

      for(i = 0; i < 5; i ++)
      {
       for(j = 0; j < 5; j ++)
       {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
       }

       printf("\n");
     }

     printf("Enter a number : ");
     scanf("%d",&sn);

     for(i = 0; i < 5 && !found; i ++)
     {
       for(j = 0; j < 5; j ++)
       {
           if(a[i][j] == sn)
           {
               printf("Found at %d,%d\n",i,j);
               found = 1;
               break;
           }
       }
    }

    if(!found)
        printf("Sorry! Number not found!");

}
