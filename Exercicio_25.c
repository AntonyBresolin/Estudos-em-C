#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int raio, altura;
    printf("Digite o raio da caixa: ");
    scanf("%d", &raio);

    printf("Digite a altura da caixa: ");
    scanf("%d", &altura);

    printf("O volume da caixa e de %f m3", (float)(3.14* pow(raio, 2)*altura));
    return 0;
}
