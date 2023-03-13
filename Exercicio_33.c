#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, dois, tres;

    printf("Digite a base menor: ");
    scanf("%f", &um);

    printf("Digite a base maior: ");
    scanf("%f",&dois);

    printf("Digite a altura: ");
    scanf("%f",&tres);

    printf("%.2f", ((um*dois)*tres)/2);
    return 0;
}
