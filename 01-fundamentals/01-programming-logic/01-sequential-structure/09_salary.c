// Ask the user for a gross salary and tax percentage and display the discount amount and net salary.

#include <stdio.h>

int main()
{
    float gross_salary, tax_percentage, discount, salary_final;

    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);

    printf("Enter the tax discount percentage: ");
    scanf("%f", &tax_percentage);

    discount = (gross_salary * tax_percentage) / 100;
    salary_final = gross_salary - discount;

    printf("\nThe discount amount is: %.2f", discount);
    printf("\nThe net salary is: %.2f\n", salary_final);

    return 0;
}