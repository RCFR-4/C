// Ask the user for the total bill and number of people and display how much each person should pay.

#include <stdio.h>

int main()
{
    int people;
    float totalBill, Bill_Person;

    printf("Enter the total bill amount: ");
    scanf("%f", &totalBill);

    printf("Enter the number of people: ");
    scanf("%d", &people);

    Bill_Person = totalBill / people;

    printf("\nEach person should pay: %.2f\n", Bill_Person);

    return 0;
}