// Ask the user for the radius of a circle and display the area and circumference.

#include <stdio.h>

int main()
{
    float radius, area, circumference, pi = 3.14;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nThe area is: %.2f", area);
    printf("\nThe circumference is: %.2f\n", circumference);

    return 0;
}