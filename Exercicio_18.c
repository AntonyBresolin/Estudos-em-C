#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, horasExtras, salarioHoras, salario;

    printf("Insira a quantidade de horas trabalhadas esse mes: ");
    scanf("%d", &horas);

    if(horas > 160){
        horasExtras = horas - 160;
        salarioHoras = 160*10;
    } else{
        salarioHoras = horas*10;
    }

    salario = (horasExtras * 15) + salarioHoras;

   printf("Seu salario bruto e de: %d\nO salario liquido e de: %.2f", salario,  (float) salario*0.9);
    return 0;
}
