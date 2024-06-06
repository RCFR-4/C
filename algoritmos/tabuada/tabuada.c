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

    int n, i, resu;

    printf("deseja a tabuada pra qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        resu = n * i;

        printf("\n%d x %d = %d", n, i, resu);
    }





    return 0;
}
