#include <stdio.h>
#include <stdlib.h>

int main()
{
       int um, cinco, dez, vinte5, cinquenta, umReal;

    printf("Informe a quantidade de moedas de 1: ");
    scanf("%d", &um);
    printf("Informe a quantidade de moedas de 5:");
    scanf("%d", &cinco);
    printf("Informe a quantidade de moedas de 10: ");
    scanf("%d", &dez);

    printf("Informe a quantidade de moedas de 25: ");
    scanf("%d", &vinte5);

    printf("Informe a quantidade de moedas de 50: ");
    scanf("%d", &cinquenta);

    printf("Informe a quantidade de moedas de 1 real: ");
    scanf("%d", &umReal);

    printf("Voce economizou o equivalente a: %.2f\n", (float) (um*0.01+cinco*0.05+dez*0.1+vinte5*0.25+cinquenta*0.5+umReal));
    return 0;
}
