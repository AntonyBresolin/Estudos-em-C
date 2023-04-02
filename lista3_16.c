#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantidadeDeProdutos = 0;
    float valorProdutos = 0, valorFinal = 0;

    while(quantidadeDeProdutos >= 0){
        printf("insira a quantidade de produtos adquiridos ou -2 para sair: ");
        scanf("%d", &quantidadeDeProdutos);
        printf("insira o valor deste produto");
        scanf("%f", &valorProdutos);

        valorFinal = quantidadeDeProdutos*valorProdutos;
    }
    printf("o valor da compra foi de %.2f", valorFinal);

    return 0;
}
