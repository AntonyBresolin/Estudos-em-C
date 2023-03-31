#include <stdio.h>
#include <stdlib.h>

int main()
{
     int valorA, valorB, valorC;

    printf("Insira o valor A: ");
    scanf("%d", &valorA);

    printf("Insira o valor B: ");
    scanf("%d", &valorB);

    printf("Insira o valor C: ");
    scanf("%d", &valorC);

    if(valorA > valorB && valorB > valorC){
        printf("%d %d %d", valorA, valorB, valorC);
    } else if(valorA > valorC && valorC > valorB){
         printf("%d %d %d", valorA, valorC, valorB);
    } else if(valorB > valorA && valorA > valorC){
         printf("%d %d %d", valorB, valorA, valorC);
    } else if(valorB > valorA && valorC > valorA){
         printf("%d %d %d", valorB, valorC, valorA);
    } else if(valorC > valorA && valorA > valorB) {
        printf("%d %d %d", valorC, valorA, valorB);
    } else {
        printf("%d %d %d", valorC, valorB, valorA);
    }


    return 0;
}
