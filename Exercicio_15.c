#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalConta;
    float valorCada;

    printf("Digite o valor total da conta: ");
    scanf("%f", &totalConta);

    valorCada = totalConta / 3;
    int valorCada_int = (int) valorCada;
    float centavos = (valorCada - valorCada_int)*2;

    printf("Carlos e Andre devem pagar R$%.2f\n", (float) valorCada_int);
    printf("Felipe deve pagar R$%.2f.\n", valorCada + centavos);


    return 0;
}
