// Ask the user for weight and height and display the BMI.

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    return 0;
}