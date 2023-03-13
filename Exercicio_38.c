#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, anoNascimento;

    printf("digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Sua idade em anos e de: %d\n", anoAtual - anoNascimento);
    printf("Sua idade em meses e de: %d\n", (anoAtual - anoNascimento)*12);
    printf("Sua idade em dias e de: %d\n", ((anoAtual - anoNascimento)*12)*30);
    printf("Sua idade em semanas e de: %d\n", ((anoAtual - anoNascimento)*12)*4);

    return 0;
}
