#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    if(numero%2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }



    return 0;
}
