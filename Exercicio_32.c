#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Peso : %.2f\n", peso*1000);
    return 0;
}
