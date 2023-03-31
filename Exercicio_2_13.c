#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0, notas100 = 0, notas50 = 0, notas10 = 0, notas5 = 0, notas1 = 0;

    printf("Insira um numero inteiro para decompor: ");
    scanf("%d", &valor);

        while(valor >= 100){
            valor -= 100;
            notas100++;
        }

        while(valor >= 50){
            valor -= 50;
            notas50++;
        }

        while(valor >= 10){
            valor -=10;
            notas10++;
        }
        while(valor >= 5){
            valor -=5;
            notas5++;
        }
        while(valor >=1 ){
            valor -=1;
            notas1++;
        }

        printf("Voce vai precisar de \n%d notas de 100 \n%d notas de 50 \n%d notas de 10 \n%d notas de 5 \n%d notas de 1", notas100, notas50, notas10, notas5, notas1);

    return 0;
}
