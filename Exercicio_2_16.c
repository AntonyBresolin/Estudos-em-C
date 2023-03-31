#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldoMedio;

    printf("Informe o saldo medio do cliente: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio >= 0 && saldoMedio <= 200){
        printf("Seu saldo medio nesse ano foi de R$ %.2f e voce nao tem direito ao credito especial");
    } else if(saldoMedio >= 201 && saldoMedio <= 400){
        printf("Seu saldo medio nesse ano foi de R$ %.2f e voce possui R$ %.2f de credito especial", saldoMedio, saldoMedio*0.2);
    } else if(saldoMedio >= 401 && saldoMedio <= 600){
        printf("Seu saldo medio nesse ano foi de R$ %.2f e voce possui R$ %.2f de credito especial", saldoMedio, saldoMedio*0.3);
    } else {
        printf("Seu saldo medio nesse ano foi de R$ %.2f e voce possui R$ %.2f de credito especial", saldoMedio, saldoMedio*0.4);

    }

    return 0;
}
