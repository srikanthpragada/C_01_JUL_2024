#include <stdio.h>

// Function declaration or Prototype declaration
float avg(int, int);


void main()
{
   printf("%.2f", avg(10,15));
}

// Function definition
float avg(int a, int b)
{
   return (a + b) / 2.0 ;
}

