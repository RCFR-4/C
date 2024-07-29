#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int a, b;

    printf("digite dois numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    while (a != b){
      if (a > b){
        printf("decrescente!\n");
      }
      else if (a < b){
        printf("crescente!\n");
      }
      printf("\ndigite outro dois numeros: \n");
      scanf("%d", &a);
      scanf("%d", &b);
    }

    return 0;

}
