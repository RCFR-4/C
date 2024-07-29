#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    double n1, n2, nf;

    printf("entre com a primeira nota: ");
    scanf("%lf", &n1);

    printf("entre com a segunda nota: ");
    scanf("%lf", &n2);

    nf = (n1 + n2);

    if (nf < 60.0){
        printf("NOTA FINAL: %.1lf", nf);
        printf("\nREPROVADO");
    }
    else{
      printf("NOTA FINAL: %.1lf", nf);
    }

    return 0;
}
