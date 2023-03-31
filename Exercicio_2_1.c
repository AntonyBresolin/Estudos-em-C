#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB;

    printf("Insira o valor A: ");
    scanf("%f", &valorA);

    printf("Insira o valor B: ");
    scanf("%f", &valorB);

    if(valorA > valorB){
        printf("O valor A e maior");
    } else if(valorA == valorB){
        printf("O valor A e B sao iguais");
    } else{
        printf("O valor B e maior");
    }

    return 0;
}
