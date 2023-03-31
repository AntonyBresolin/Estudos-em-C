#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cargo;
    float salarioAtual;

    printf("Selecione seu cargo atual:\n101 - Gerente\n102 - Engenheiro\n103 - Tecnico\n104 - Nao listado na tabela\n");
    scanf("%d", &cargo);

    printf("Informe seu salario: ");
    scanf("%f", &salarioAtual);

    switch(cargo){
        case 101:
            printf("Seu antigo salario era de R$ %2.f e seu novo salario deve ser de: R$ %.2f tendo um aumento de R$ %.2f", salarioAtual, salarioAtual*1.1, (salarioAtual* 1.1) - salarioAtual);
            break;
        case 102:
            printf("Seu antigo salario era de R$ %2.f e seu novo salario deve ser de: R$ %.2f tendo um aumento de R$ %.2f", salarioAtual, salarioAtual*1.2, (salarioAtual* 1.2) - salarioAtual);
            break;
        case 103:
            printf("Seu antigo salario era de R$ %2.f e seu novo salario deve ser de: R$ %.2f tendo um aumento de R$ %.2f", salarioAtual, salarioAtual*1.3, (salarioAtual* 1.3) - salarioAtual);
            break;
        case 104:
            printf("Seu antigo salario era de R$ %2.f e seu novo salario deve ser de: R$ %.2f tendo um aumento de R$ %.2f", salarioAtual, salarioAtual*1.4, (salarioAtual* 1.4) - salarioAtual);
            break;
    }

    return 0;
}
