#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;

    float peso= 1, bebida =1, soma= 0;

        while(peso != 0 && bebida != 0){
        printf("digite o peso do prato: ");
        scanf("%f", &peso);
         printf("digite o valor gasto com bebida");
        scanf("%f", &bebida);

        soma= soma+ (bebida+(peso*15));
    }
printf("O valor da conta e de %.2f ",soma);


    return 0;
}
