#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois, tres;

    printf("Digite um numero: ");
    scanf("%f", &um);

    printf("Digite um numero: ");
    scanf("%f",&dois);

    printf("Digite um numero: ");
    scanf("%f",&tres);

    printf("%.2f", um*dois*tres);
    return 0;
}
