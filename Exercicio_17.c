#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperaturaC;

    printf("Digite a temperatura em grau celcius: ");
    scanf("%f", &temperaturaC);

    printf("A temperatura atual em Fahrenheit e igual a: %.2f\n", temperaturaC*1.8 + 32);
    return 0;
}
