// prints a message with lines

#include <stdio.h>

// user-defined function
void line(int len, char ch)
{
 int i;

    for (i= 1; i <= len; i++)
    {
       putch(ch);
    }
}


void main()
{

    line(25, '*');
    printf("\nSrikanth Technologies\n");
    line(30, '-');
}
