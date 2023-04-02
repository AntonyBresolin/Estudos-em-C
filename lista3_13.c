#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroDigitado;
    int i = 0;
    int maioresDe100=0;

    while( i < 20){
        printf("digite um numero: ");
        scanf("%d", &numeroDigitado);

        if(numeroDigitado >= 0 && numeroDigitado <= 100){
            maioresDe100 = maioresDe100 +1;
        }
        i++;
    }

    printf("a quantidade de numeros entre um e 100 e de %d", maioresDe100);
    return 0;
}
