#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


void limpar_Entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    int i, j, l, c;

    printf("quantas linhas vai ter? ");
    scanf("%d", &l);
    printf("quantas colunas vai ter? ");
    scanf("%d", &c);

    double mat [l][c];
    double vet [l];


    for (i = 0; i < l; i++){
    printf("digite os elementos da %d linha: \n", i + 1);
        for (j = 0; j < c; j++){
        scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 0; i < l; i++){
        vet[i] = 0.0;
        for (j = 0; j < c; j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("\nvetor gerado: \n");
    for (i = 0; i < l; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}

