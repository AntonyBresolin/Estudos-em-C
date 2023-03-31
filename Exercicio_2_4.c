#include <stdio.h>
#include <stdlib.h>

int main()
{
     int valorA;

    printf("Insira o numero: ");
    scanf("%d", &valorA);


    if(valorA >= 0){
        printf("%d", valorA*2);
    } else{
        printf("%d", valorA*3);
    }
    return 0;
}
