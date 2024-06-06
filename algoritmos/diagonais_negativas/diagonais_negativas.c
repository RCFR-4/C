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

    int n, i, j, cont_neg;

    printf("qual a ordem da matriz? ");
    scanf("%d", &n);

    cont_neg = 0;

    int mat[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
             printf("elemento [%d][%d]: ",i, j);
             scanf("%d", &mat[i][j]);
        }
    }

    printf("diagonal principal: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
             if (i == j){
                printf("%d ", mat[i][j]);
             }
             if (mat[i][j] < 0){
                cont_neg = cont_neg + 1;
             }
        }
    }
    printf("\nquantidade de negativos: %d", cont_neg);






    return 0;
}

