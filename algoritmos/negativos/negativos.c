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

    int i, n;

    printf("quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 1; i <= n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nnumeros negativos: ");
    for (i = 1; i <= n; i++){
        if (vet[i] < 0){
        printf("\n%d", vet[i]);
        }

    }






    return 0;
}
