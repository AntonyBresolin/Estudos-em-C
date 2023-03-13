#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um;

     printf("Digite o primeiro preco: ");
    scanf("%f", &um);

    printf("O novo preco e: %.2f\n", um*0.9);
    return 0;
}
