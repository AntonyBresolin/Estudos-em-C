#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroDigitado;
    int i = 0;
    int numerosPares=0;

    while( i < 20){
        printf("digite um numero: ");
        scanf("%d", &numeroDigitado);

        if(numeroDigitado%2 == 0){
            numerosPares = numerosPares +1;
        }
        i++;
    }

    printf("a quantidade de numeros pares e de %d", numerosPares);
    return 0;
}
