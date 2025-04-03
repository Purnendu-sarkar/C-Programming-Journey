#include <stdio.h>

int main()
{
    int price = 60;

    if (price < 50)
    {
        printf("Buy the product\n");
        printf("Take %d taka back\n", 50 - price);
    }
    else
    {
        printf("Buy the product\n");
    }

    ruturn 0;
    // The code checks the price of a product and decides whether to buy it or not.
}