#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;

    printf("Quantos cavalos foram comprados para o haras? ");
    scanf("%d", &quantidade);
    printf("A quantidade de ferraduras necess�rias e: %d\n", quantidade*4);
    return 0;
}
