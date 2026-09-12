// Ask the user for a distance in miles and display the distance in kilometers.

#include <stdio.h>

int main()
{
    float miles, kilometers;

    printf("Enter the distance in miles: ");
    scanf("%f", &miles);

    kilometers = miles * 1.60934;

    printf("\nThe distance in kilometers is: %.2f\n", kilometers);

    return 0;
}