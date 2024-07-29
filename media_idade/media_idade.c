#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int cont, idade;
    double soma, media;

    cont = 0;
    media = 0.0;
    soma = 0.0;


    printf("digite as idades: \n");
    do{
        scanf("%d", &idade);

        if (idade >= 0){
          soma = soma + idade;
          cont = cont + 1;
        }


    } while (idade >= 0);

     media = soma / cont;


    if (cont != 0){
        printf("\nmedia: %.2lf", media);
    }
    else{
        printf("\nimpossivel calcular");
    }

    return 0;
}
