#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioInicial, salarioFinal;

    printf("digite seu salario: ");
    scanf("%f", &salarioInicial);

    salarioFinal = salarioInicial*1.15;

    printf("Seu salario inicial era: R$ %.2f apos o aumento ficou: R$ %.2f e sem os impostos ficou: R$ %.2f", salarioInicial, salarioFinal, salarioFinal*0.92);
    return 0;
}
