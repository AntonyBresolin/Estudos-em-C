#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois;

     printf("Digite uma nota: ");
    scanf("%f", &um);

    printf("Digite uma nota: ");
    scanf("%f",&dois);

    printf("%.2f", (um*2 + dois*3)/5);
    return 0;
}
