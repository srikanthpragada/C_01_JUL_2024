// Take a number and display cube of that number
//  Date : 04-JUL-2024

# include <stdio.h>

void main()
{
     int num, cube;   // variables

       // input
       printf("Enter a number:");
       scanf("%d", &num);

       // process
       cube = num * num * num;

       // output
       printf("Cube of %d is %d", num, cube);
}
