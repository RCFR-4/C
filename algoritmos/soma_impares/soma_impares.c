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

    int x, y, soma, troca;

    printf("digite dois numeros: \n");
    scanf("%d %d", &x, &y);

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    for(int i = x+1; i < y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }

    printf("soma dos impares: %d", soma);







    return 0;
}

