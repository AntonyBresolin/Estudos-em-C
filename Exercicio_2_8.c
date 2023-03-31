#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorConta;
    int formaPagamento, parcelas;

    printf("Digite o valor da conta: ");
    scanf("%f", &valorConta);

    printf("Escolha o metodo de pagamento:\n1 - A vista\n2 - cheque\n3 - cartao de credito\n");
    scanf("%d", &formaPagamento);

    switch (formaPagamento){
    case 1:
        printf("Seu pagamento deve ser de: R$ %.2f", valorConta*0.9);
        break;
    case 2:
        printf("Seu pagamento deve ser de: R$ %.2f", valorConta*0.9);
        break;
    case 3:
        printf("Informe quantas parcelas deseja pagar: ");
        scanf("%d", &parcelas);

        if(parcelas == 1){
            printf("Seu pagamento deve ser de: R$ %.2f", valorConta*0.85);
            break;
        } else if (parcelas == 2){
            printf("Seu pagamento deve ser de: R$ %.2f", valorConta);
            break;
        } else {
            printf("Seu pagamento deve ser de: R$ %.2f", valorConta*1.1);
            break;
        }
    }

    return 0;
}
