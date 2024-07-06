// Take qty, price and display net amount using 12% tax

#include <stdio.h>

void main()
{
  int qty, price, amount, tax, net_amount;


     printf("Enter Price :");
     scanf("%d", &price);

     printf("Enter Quantity :");
     scanf("%d", &qty);

     amount = price * qty;
     tax =  amount * 12 / 100;

     net_amount = amount + tax;


     printf("Amount      : %6d\n",amount);
     printf("+ Tax       : %6d\n",tax);
     printf("Net Amount  : %6d\n",net_amount);
}
