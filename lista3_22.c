#include <stdio.h>
#include <stdlib.h>

int main()
{

    float quilometragemInicial = 0, quilometragemPercorrida = 0, quilometragemAtual = 0;

    printf("insira sua quilometragem inicial: ");
    scanf("%f", &quilometragemInicial);

    while(quilometragemPercorrida < 4000){
        printf("Insira a quilometragem atual: ");
        scanf("%f", &quilometragemAtual);

        quilometragemPercorrida = quilometragemAtual - quilometragemInicial;
    }
    printf("Parabens voce chegou au seu destino");

    return 0;
}
