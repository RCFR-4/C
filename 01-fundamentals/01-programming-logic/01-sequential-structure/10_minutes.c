// Ask the user for days, hours, and minutes and display the total time in minutes.

#include <stdio.h>

int main()
{
    int days, hours, minutes, total_minutes;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    total_minutes = minutes + (hours * 60) + ((days * 24) * 60);

    printf("\nThe total time in minutes is: %d\n", total_minutes);

    return 0;
}