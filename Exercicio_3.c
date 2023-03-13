#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadePaes, quantidadeBroas;
    double arrecadado;
    printf("Informe a quantidade de paes vendidos:  ");
    scanf("%d", &quantidadePaes);
    printf("Informe a quantidade de broas vendidos: ");
    scanf("%d", &quantidadeBroas);

    arrecadado = (quantidadePaes*0.12) + (quantidadeBroas*1.5);

    printf("Foi arrecadado: R$ %.2lf\n", arrecadado);

    arrecadado = arrecadado*0.1;

    printf("Voce deve investir: R$ %.2lf\n", arrecadado);
    return 0;
}
