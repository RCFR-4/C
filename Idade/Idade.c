#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}


int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("dados da primeira pessoa:\n");
    printf("nome: ");
    ler_texto(nome1, 50);
    printf("idade: ");
    scanf("%d", &idade1);


    printf("\ndados da segunda pessoa:\n");
    printf("nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("a idade media de %s e %s eh %.1lf", nome1, nome2, media);






return 0;
}
