#include <stdio.h>
#include <stdlib.h>

int main()
{

    int votos1 = 0, votos2 = 0, votoAtual = 5;

    while(votoAtual != 0){
        printf("digite seu voto\n1 - Jose\n2 - Joao\n0 - encerrar votacao\n");
        scanf("%d", &votoAtual);

        if(votoAtual == 1){
            votos1++;
            printf("Voto computado\n\n\n\n");
        } else if(votoAtual == 2){
            votos2++;
            printf("Voto computado\n\n\n\n");
        } else if (votoAtual != 2 && votoAtual != 1 && votoAtual != 0){
            printf("Voto invalido, tente novamente\n\n\n\n");
        }
    }

    printf("o resultado foi: \nJose = %d\nJoao = %d", votos1, votos2);


    return 0;
}
