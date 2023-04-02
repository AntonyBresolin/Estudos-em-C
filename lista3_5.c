#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, resultado;



    for(int i = 1; i <= 10; i++){
        printf("digite um numero");
        scanf("%d", &numero);
        resultado = resultado+numero;
    }
        printf("%d\n", resultado);


    return 0;
}
