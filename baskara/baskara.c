#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{

    double a, b, c, delta, x1, x2;

    printf("coeficiente a: ");
    scanf("%lf", &a);

    printf("coeficiente b: ");
    scanf("%lf", &b);

    printf("coeficiente c: ");
    scanf("%lf", &c);

    delta = (b * b) - 4 * a * c;

    if (a == 0 || delta < 0){
        printf("esta equacao nao possui raizes reais");
    }
    else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("X1: %lf", x1);
        printf("\nX2: %lf", x2);
    }
}
