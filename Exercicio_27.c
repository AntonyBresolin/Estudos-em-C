#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois;

     printf("Digite um numero: ");
    scanf("%f", &um);

    printf("Digite um numero: ");
    scanf("%f",&dois);

    printf("%.2f", um/dois);
    return 0;
}
