// Ask the user for three grades and display the average.

#include <stdio.h>

int main()
{
    float n1, n2, n3, average;

    printf("Enter the first grade: ");
    scanf("%f", &n1);

    printf("Enter the second grade: ");
    scanf("%f", &n2);

    printf("Enter the third grade: ");
    scanf("%f", &n3);

    average = (n1 + n2 + n3) / 3;

    printf("\nThe average is: %.2f\n", average);

    return 0;
}