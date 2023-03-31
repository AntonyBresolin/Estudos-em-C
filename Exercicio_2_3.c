#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valorA, valorB;

    printf("Insira o valor A: ");
    scanf("%d", &valorA);

    printf("Insira o valor B: ");
    scanf("%d", &valorB);

    if(valorA == valorB){
        printf("%d",valorA + valorB);
    } else{
        printf("%d", valorA * valorB);
    }


    return 0;
}
