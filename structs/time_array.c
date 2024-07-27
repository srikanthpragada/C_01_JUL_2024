#include <stdio.h>

struct time
{
   int hours, mins, secs;
};


void main()
{
  struct time times[5];
  int i;


      srand(time(0));

      for(i = 0; i < 5; i ++)
      {
          times[i].hours = rand() % 24;
          times[i].mins = rand() % 60;
          times[i].secs = rand() % 60;
      }



      for(i = 0; i < 5; i ++)
      {
          printf("%02d:%02d:%02d\n", times[i].hours, times[i].mins, times[i].secs);
      }
}
