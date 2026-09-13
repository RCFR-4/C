// Ask the user for a product price and discount percentage and display the discount amount and final price.

#include <stdio.h>

int main()
{
    float Product_Price, Discount_Percentage, Discount, Final_Price;

    printf("Enter the product price: ");
    scanf("%f", &Product_Price);

    printf("Enter the discount percentage: ");
    scanf("%f", &Discount_Percentage);

    Discount = Product_Price * Discount_Percentage / 100;
    Final_Price = Product_Price - Discount;

    printf("\nThe discount amount is: %.2f", Discount);
    printf("\nThe final price is: %.2f\n", Final_Price);

    return 0;
}