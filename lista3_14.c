#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroDigitado;
    int i = 0;
    int maioresDe100=0, entre101e200=0, maiores200=0;

    while( i < 5){
        printf("digite um numero: ");
        scanf("%d", &numeroDigitado);

        if(numeroDigitado >= 0 && numeroDigitado <= 100){
            maioresDe100 = maioresDe100 +1;
        } else if(numeroDigitado >= 101 && numeroDigitado <= 200){
            entre101e200++;
        } else if(numeroDigitado >200){
        maiores200++;
        }
        i++;
    }

    printf("a quantidade de numeros entre um e 100 e de %d\n 101-200 = %d\n 200> = %d", maioresDe100, entre101e200, maiores200);
    return 0;
}
