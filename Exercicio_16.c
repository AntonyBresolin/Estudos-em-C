#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeHamburger;

    printf("Informe a quantidade de hamburgers: ");
    scanf("%d", &quantidadeHamburger);
    printf("Sera necessario em kg: \nQueijo: %.2f \nPresunto: %.2f \nHamburguer: %.2f", (float) (quantidadeHamburger*50)/1000, (float)(quantidadeHamburger*50)/1000, (float)(quantidadeHamburger*100)/1000);
    return 0;
}
