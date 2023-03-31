#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigoPedido, qtdCachorro, qtdBauru, qtdMisto, qtdHamb, qtdChees, qtdRefri;

    printf("Informe o codigo do pedido: ");
    scanf("%d", &codigoPedido);

    printf("Informe a quantidade de cachorro quente: ");
    scanf("%d", &qtdCachorro);

    printf("Informe a quantidade de Bauru: ");
    scanf("%d", &qtdBauru);

    printf("Informe a quantidade de Misto: ");
    scanf("%d", &qtdMisto);

    printf("Informe a quantidade de Hamburguer: ");
    scanf("%d", &qtdHamb);

    printf("Informe a quantidade de Cheesburguer: ");
    scanf("%d", &qtdChees);

    printf("Informe a quantidade de refrigerante: ");
    scanf("%d", &qtdRefri);

    printf("O valor a ser pago pelo pedido e de R$ %.2f", (float) (qtdCachorro*11 + qtdBauru*8.5 + qtdMisto*8 + qtdHamb*9 + qtdChees*10 + qtdRefri*4.5));

    return 0;
}
