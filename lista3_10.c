#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroDigitado;
    int i = 0;

    printf("digite um numero: ");
    scanf("%d", &numeroDigitado);

    while( i <= 10){
    printf("%d x %d = %d\n", numeroDigitado, i, numeroDigitado*i);
        i++;
    }

    return 0;
}
