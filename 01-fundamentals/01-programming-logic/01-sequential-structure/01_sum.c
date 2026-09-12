// Ask the user for two integers and display their sum.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("\nThe sum is: %d\n", n1 + n2);

    return 0;
}