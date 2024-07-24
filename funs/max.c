// max of 3 numbers

#include <stdio.h>

int max(int a, int b, int c)
{
     if(a > b)
        if(a > c)
           return a;
        else
           return c;
     else
        if(b > c)
           return b;
        else
           return c;
}


void main()
{

      printf("%d ", max(10,20,15));

}
