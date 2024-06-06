#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {

    double base, altura, area, peri, diago;

    printf("base do retangulo: ");
    scanf("%lf", &base);

    printf("altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    peri = 2 * (base + altura);
    diago = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("\narea: %.4lf", area);
    printf("\nperimitro: %.4lf", peri);
    printf("\ndiagonal: %.4lf", diago);

return 0;
}

