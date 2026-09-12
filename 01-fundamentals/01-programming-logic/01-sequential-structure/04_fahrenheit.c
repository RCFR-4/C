// Ask the user for a temperature in Celsius and display the temperature in Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\nThe temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}