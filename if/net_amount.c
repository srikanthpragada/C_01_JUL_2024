// Take qty and price and display net amount

#include <stdio.h>

void main()
{
  int qty, price, discount, amount, net_amount;

     printf("Enter price :");
     scanf("%d", &price);

     printf("Enter qty  :");
     scanf("%d", &qty);

     amount = qty * price;


     if(qty > 3)
        discount = amount * 40 / 100;
     else
        if(qty > 2)
           discount = amount * 30 / 100;
        else
           discount = amount * 10 / 100;

     net_amount = amount - discount;

     printf("Amount       : %8d\n",amount);
     printf("- Discount   : %8d\n",discount);
     printf("Net Amount   : %8d\n",net_amount);



}
