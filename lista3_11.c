#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroDigitado;
    int i = 0;
    int maiores8=0;

    while( i < 20){
        printf("digite um numero: ");
        scanf("%d", &numeroDigitado);

        if(numeroDigitado > 8){
            maiores8 = maiores8 +1;
        }
        i++;
    }

    printf("o numero de numeros maiores que 8 e de %d", maiores8);
    return 0;
}
