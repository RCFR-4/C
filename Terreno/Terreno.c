#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {

    double larg, compri, v_metro, area, preco;

    printf("digite a largura do terreno: ");
    scanf("%lf", &larg);

     printf("digite o comprimento do terreno: ");
    scanf("%lf", &compri);

     printf("digite o valor do metro quadrado: ");
    scanf("%lf", &v_metro);

    area = larg * compri;
    preco = area * v_metro;

    printf("\narea do terreno: %.2lf", area);
    printf("\npreco do terreno: %.2lf", preco);


    return 0;
}
