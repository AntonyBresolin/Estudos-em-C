#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;

    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    printf("Escreva sua idade: ");
    scanf("%d", &idade);

    printf("%s voce ja viveu %d",nome, idade*365);
    printf(" dias");
    return 0;

}
