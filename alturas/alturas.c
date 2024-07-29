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

    int n, i, quant_menor;

    quant_menor = 0;


    printf("quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome [n][50];
    double altura [n];
    double soma_alt, media_alt, porce;
    int idade [n];

    soma_alt = 0.0;
    media_alt = 0.0;
    porce = 0.0;

    for (i = 0; i < n; i++){
        printf("\ndados da %d pessoa: \n", i + 1);
        printf("nome: ");
        limpar_Entrada();
        ler_texto(nome[i], 50);
        printf("idade: ");
        scanf("%d", &idade[i]);
        printf("altura: ");
        scanf("%lf", &altura[i]);

        soma_alt = soma_alt + altura[i];

        if (idade[i] < 16){
            quant_menor = quant_menor + 1;
        }
    }

    media_alt = soma_alt / n;
    porce = ((double)quant_menor / n) * 100;

    printf("\naltura media: %.2lf", media_alt);
    printf("\nporcentagens de pessoas menores que 16: %.1lf", porce);

    for (i = 0; i < n; i++){
        if (idade[i] < 16){
            printf("\n%s", nome[i]);
        }
    }

    return 0;
}
