#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantidadeFumantes = 25, quantidadeNormais = 25, identificador = 0;

    while(quantidadeFumantes != 0 && quantidadeNormais != 0 ){
        printf("Voce deseja ir para area fumantes ou nao fumantes?\n1 - FUMANTES -- %d)\n 2 - nao FUMANTES -- %d\n", quantidadeFumantes, quantidadeNormais);
        scanf("%d", &identificador);

        if(identificador == 1){
            quantidadeFumantes--;
        } else{
            quantidadeNormais--;
        }
    }

    return 0;
}
