#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero = 0;
    int soma = 0;

    while(numero >= 0){
        printf("digite um numero: ");
        scanf("%d", &numero);

        if(numero > 0){
            soma +=numero;
        }

    }
    printf("A soma dos numeros digitados e de %d", soma);


    return 0;
}
