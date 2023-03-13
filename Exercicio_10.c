#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float xA, xB, yA, yB, resultado;

    printf("Infome o valor do eixo x do primeiro ponto: ");
    scanf("%f", &xA);
    printf("Infome o valor do eixo y do primeiro ponto: ");
    scanf("%f", &yA);
    printf("Infome o valor do eixo x do segundo ponto: ");
    scanf("%f", &xB);
    printf("Infome o valor do eixo y do segundo ponto: ");
    scanf("%f", &yB);

    resultado = sqrt((sqrt(xB - xA)) + (sqrt(yB - yA)));

    printf("A distancia entre os dois pontos e igual a: %f\n", resultado);
    return 0;
}
