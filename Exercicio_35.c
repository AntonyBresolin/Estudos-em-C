#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois;

    printf("Digite a menor: ");
    scanf("%f", &um);

    printf("Digite a maior: ");
    scanf("%f",&dois);

    printf("%.2f", (um*dois)/2);
    return 0;
}
