#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;

     printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f",&b);

    c = sqrt((pow(a,2))+ (pow(b, 2)));

    printf("O valor da hipotenusa e igual a: %f\n", c);
    return 0;
}
