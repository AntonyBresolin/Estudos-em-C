#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float tabelaFipe;

    printf("Informe o ano de seu carro: ");
    scanf("%d", &ano);

    printf("Informe a tabela fipe do carro: ");
    scanf("%f", &tabelaFipe);

    if(ano >= 1990){
        printf("O valor a ser pago para o detran sera de: R$ %.2f", tabelaFipe*0.015);
    } else{
        printf("O valor a ser pago para o detran sera de: R$ %.2f", tabelaFipe*0.01);
    }

    return 0;
}
