// Take numbers until 0 is given and print avg

#include <stdio.h>

void main()
{
   int num, i, total = 0, count = 0;


       while(1)
       {
           printf("Enter number [0 to stop] :");
           scanf("%d",&num);

           if(num == 0)
              break;

           total += num;
           count ++;

       }

       printf("Average = %d", total/count);


}
