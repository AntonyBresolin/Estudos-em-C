#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int i = 0;

    printf("insira o seu nome: ");
    scanf("%s", nome);

    while(i < 10) {
        printf("%s\n", nome);
        i++;

    }

    return 0;
}
