// Take price and calculate net price with a discount of 15%

#include <stdio.h>

void main()
{
  float price, discount, net_price;

     printf("Enter price :");
     scanf("%f", &price);

     discount = price * 15 / 100;
     net_price = price - discount;

     printf("Price        : %8.2f\n", price);
     printf("- Discount   : %8.2f\n", discount);
     printf("Net Price    : %8.2f", net_price);
}
