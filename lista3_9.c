#include <stdio.h>
#include <stdlib.h>

int main()
{

   int idade, maisNova=500;

    for(int i = 1; i <= 5; i++){
        printf("digite uma idade");
        scanf("%d", &idade);
        if(idade < maisNova){
            maisNova = idade;
        }
    }
        printf("A pessoa mais nova possue %d anos de idade\n", maisNova);



    return 0;
}
