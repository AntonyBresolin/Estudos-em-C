#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, largura;

    printf("Digite a Largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o Comprimento do terreno: ");
    scanf("%f", &altura);

    printf("A area do terreno e igual a: %f\n", largura*altura);
    return 0;
}
