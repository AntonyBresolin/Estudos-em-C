#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoPrato;

    printf("Informe quanto seu prato esta pesando: ");
    scanf("%f", &pesoPrato);

    printf("O total a se pagar e de: R$ %.2f", pesoPrato*12);
    return 0;
}
