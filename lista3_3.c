#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;

    printf("digite um numero");
    scanf("%d", &numero);


    for(int i = 1; i <= numero; i++){
        printf("essa e a mensagem numero %d\n", i);
    }


    return 0;
}
