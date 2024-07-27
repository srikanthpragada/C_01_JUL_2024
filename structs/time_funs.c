#include <stdio.h>

struct time
{
   int hours, mins, secs;
};

// struct as param
void print(struct time t)
{
   printf("%02d:%02d:%02d ", t.hours, t.mins, t.secs);
}

int totalseconds(struct time t)
{
  return  t.hours * 3600 + t.mins * 60 + t.secs;
}

int compare(struct time t1, struct time t2)
{
    return  totalseconds(t1) - totalseconds(t2);
}

void main()
{
  struct time t1 = {1,2,3};
  struct time t2 = {1,2,3};


          print(t1);
          printf("%d", totalseconds(t1));

}
