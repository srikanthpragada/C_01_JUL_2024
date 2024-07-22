// prints a message with lines

#include <stdio.h>

// user-defined function
void line()
{
 int i;

    for (i= 1; i <= 30; i++)
    {
       putch('*');
    }
}


void main()
{

    line();
    printf("\nSrikanth Technologies\n");
    line();
}
