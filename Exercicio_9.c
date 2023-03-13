#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pequenas, medias, grandes;

    printf("Informe a quantidade de camisetas pequenas: ");
    scanf("%d", &pequenas);
    printf("Informe a quantidade de camisetas medias: ");
    scanf("%d", &medias);
    printf("Informe a quantidade de camisetas grandes: ");
    scanf("%d", &grandes);

    printf("A quantia arrecadada pela venda das camisetas foi de : R$ %d", ((pequenas*10)+ (medias*12) + (grandes*15)));

    return 0;
}
