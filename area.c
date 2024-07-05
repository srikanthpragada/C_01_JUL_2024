// Take radius and calculate area

#include <stdio.h>

void main()
{
  float radius, area;

     printf("Enter radius :");
     scanf("%f", &radius);

     area = 3.14 * radius * radius;

     printf("Area of a circle with radius %.2f is %.2f", radius, area);
}
