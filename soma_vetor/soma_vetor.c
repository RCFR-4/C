#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


void limpaEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double soma, media;
    int i, n;


    printf("quantos numeros vc vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    soma = 0.0;
    media = 0.0;

    for (i = 1; i <= n; i++){
        printf("digite um numero: ");
        scanf("%lf", &vet[i]);

        soma = soma + vet[i];
    }

    media = soma / n;

    printf("\nvalores: \n");
    for (i = 1; i <= n; i++){
        printf("%.1lf\n", vet[i]);
    }

    printf("soma: %.1lf", soma);
    printf("\nmedia: %.1lf", media);

    return 0;

}
