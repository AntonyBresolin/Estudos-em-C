#include <stdio.h>
#include <stdlib.h>

int main()
{
    int um;

    printf("Digite um numero: ");
    scanf("%d", &um);

    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", um, i, um*i);
    }

    return 0;
}
