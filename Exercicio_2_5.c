#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    if(numero%2 == 0){
        printf("%d", numero + 5);
    } else{
        printf("%d", numero + 8);
    }


    return 0;
}
