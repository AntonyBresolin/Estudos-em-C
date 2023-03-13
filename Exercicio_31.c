#include <stdio.h>
#include <stdlib.h>

int main()
{
   float peso;

   printf("Digite seu peso: ");
   scanf("%f", &peso);

    printf("Peso 15: %.2f\nPeso 20: %.2f", peso*1.15, peso*1.2);
    return 0;
}
