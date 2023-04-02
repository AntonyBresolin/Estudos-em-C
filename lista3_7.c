#include <stdio.h>
#include <stdlib.h>

int main()
{

   int idade, soma;

    for(int i = 1; i <= 20; i++){
        printf("digite uma idade");
        scanf("%d", &idade);
        soma = soma+idade;
    }
        printf("a media das idades e: %d\n", soma/20);



    return 0;
}
