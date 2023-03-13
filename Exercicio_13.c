#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0, centena, dezena, unidade;

    while(numero == 0 || numero > 999){
        printf("Insira um numero de 1 a 999: ");
        scanf("%d", &numero);
    }
    centena= numero/100;
    dezena = numero - centena*100;
    numero = dezena;
    dezena = dezena/10;
    unidade = numero - dezena*10;

    printf("Centena = %d\nDezena = %d\nUnidade = %d\n", centena, dezena, unidade);
    return 0;
}
