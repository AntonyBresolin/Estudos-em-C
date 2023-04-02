#include <stdio.h>
#include <stdlib.h>

int main()
{

   int idade, soma;

    for(int i = 1; i <= 20; i++){
        printf("digite uma idade");
        scanf("%d", &idade);
        if(idade >= 18){
            soma++;
        }
    }
        printf("existem %d pessoas acima de 18 anos\n", soma);



    return 0;
}
