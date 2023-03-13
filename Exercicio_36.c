#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois;

    printf("Digite o salario minimo: ");
    scanf("%f", &um);

    printf("Digite seu salario: ");
    scanf("%f",&dois);

    printf("voce ganhar %.2f salarios minimos", dois/um);
    return 0;
}
