#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeNovelos, quantidadeBlusas;

    printf("Insira a quantidade de blusas feitas: ");
    scanf("%d",&quantidadeBlusas);

    printf("Insira a quantidade de novelos gastos: ");
    scanf("%d",&quantidadeNovelos);

    printf("O gasto de novelo de la por blusa e de: %.2f", (float) quantidadeNovelos/quantidadeBlusas);

    return 0;
}
