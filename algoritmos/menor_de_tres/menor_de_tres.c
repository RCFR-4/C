#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{

    int a, b, c, menor;

    printf("entre com o primeiro valor:");
    scanf("%d", &a);

    printf("entre com o segundo valor:");
    scanf("%d", &b);

    printf("entre com o terceiro valor:");
    scanf("%d", &c);

    if (a < b && a < c){
        menor = a;
    }
    else if (b < a && b < c){
        menor = b;
    }
    else{
        menor = c;
    }
    printf("MENOR: %d", menor);


    return 0;

}
