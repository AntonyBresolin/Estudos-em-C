#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, precoGasolina;

    printf("Digite o preco da Gasolina: ");
    scanf("%f", &precoGasolina);
    printf("Digite o valor que deseja colocar: ");
    scanf("%f", &valor);

    printf("Voce colocou : %.2f", valor/precoGasolina);
    printf(" litros de gasolina");
    return 0;
}
