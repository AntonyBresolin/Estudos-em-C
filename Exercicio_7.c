#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia = 0, mes, quantidadeDiasPassados;

    while(dia > 30 || dia == 0){
        printf("Informe um dia: ");
        scanf("%d", &dia);
    }
    while(mes > 12 || mes == 0){
        printf("Informe um mes de 1 a 12: ");
        scanf("%d", &mes);
    }

    quantidadeDiasPassados = (mes*30) + dia -30;

    printf("Ja se passaram: %d", quantidadeDiasPassados);
    printf(" dias desde o inicio do ano");
    return 0;
}
