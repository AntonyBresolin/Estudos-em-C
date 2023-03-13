#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, vendas;

    printf("Digite o valor de seu salario fixo: ");
    scanf("%f", &salario);

    printf("informe o valor de suas vendas: ");
    scanf("%f", &vendas);

    vendas= vendas*0.04;

    printf("Seu salario e de R$ %.2f sua comissao e de R$ %.2f e seu salario final ficou R$ %.2f\n", salario, vendas, salario + vendas);
    return 0;
}
