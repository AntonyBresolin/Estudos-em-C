#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaPessoa, comprimentoSombraPessoa, comprimentoSombraPredio, alturaPredio;

    printf("Digite a sua altura: ");
    scanf("%f", &alturaPessoa);

    printf("Digite o comprimento da sua sombra: ");
    scanf("%f", &comprimentoSombraPessoa);

    printf("Digite o comprimento da sombra do predio: ");
    scanf("%f", &comprimentoSombraPredio);

    alturaPredio = alturaPessoa * (comprimentoSombraPredio / comprimentoSombraPessoa);
    printf("A altura do predio e: %.2f\n", alturaPredio);

    return 0;
}
