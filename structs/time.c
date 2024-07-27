#include <stdio.h>

struct time
{
   int hours, mins, secs;
};


void main()
{
  struct time t;
  struct time t2 = {10, 15, 30};


      printf("Enter time [hh:mm:ss] :");
      scanf("%d:%d:%d", &t.hours, &t.mins, &t.secs);

      //t2 = t;

      printf("%02d:%02d:%02d\n", t.hours, t.mins, t.secs);
      printf("%02d:%02d:%02d", t2.hours, t2.mins, t2.secs);

}
