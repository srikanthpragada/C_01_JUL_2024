#include <stdio.h>

enum paymode {
    CASH = 100, UPI = 50, CARD = 200
};


void main()
{
  enum paymode mode;

    mode = UPI;


    if(mode == CARD)
        printf("Processing card!");
    else
        if(mode == UPI)
           printf("Processing UPI!");
        else
           printf("CASH Payment");

    printf(" %d", CARD);


}
