#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float mediaPonderada;

    printf("Informe sua nota 1: ");
    scanf("%f", &nota1);
    printf("Informe sua nota 2: ");
    scanf("%f", &nota2);
    printf("Informe sua nota 3: ");
    scanf("%f", &nota3);

    mediaPonderada = ((nota1) + (nota2*2) + (nota3*3))/6;

    printf("Sua media ponderada e igual a: %.2f", mediaPonderada);
    return 0;
}
