// Print wage based on day and hours

#include <stdio.h>

void main()
{
   int hours, day, wage;

       printf("Enter day and hours :");
       scanf("%d%d",&day,&hours);


       switch(day)
       {
       case 1:
       case 2:
       case 3: wage  = hours * 100; break;
       case 4:
       case 5: wage = hours * 125; break;
       case 6: wage = hours * 150; break;
       default:
               wage = hours * 200;
       }

       if (wage > 1000)
          wage = wage * 1.1;

       printf("Wage = %d", wage);

}
