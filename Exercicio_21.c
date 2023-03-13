#include <stdio.h>
#include <stdlib.h>

int main()
{
     int pequenas, medias, grandes;

    printf("Informe a quantidade de latas: ");
    scanf("%d", &pequenas);
    printf("Informe a quantidade de garafas: ");
    scanf("%d", &medias);
    printf("Informe a quantidade de litros: ");
    scanf("%d", &grandes);

    printf("A quantia de litros foi de : %.2f", (float)((pequenas*350)+ (medias*600) + (grandes*2000))/1000);
    return 0;
}
