#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivelProfessor, horasTrabalhadas;

    printf("Informe seu nivel: ");
    scanf("%d", &nivelProfessor);

    printf("Informe quantas horas trabalhou essa semana: ");
    scanf("%d", &horasTrabalhadas);

    if(nivelProfessor == 1){
        printf("Seu salario deve ser de R$ %.2f reais", 12*horasTrabalhadas*4.5);
    } else if(nivelProfessor == 2 ){
        printf("Seu salario deve ser de R$ %.2f reais", 17*horasTrabalhadas*4.5);

    } else{
        printf("Seu salario deve ser de R$ %.2f reais", 25*horasTrabalhadas*4.5);

    }
    return 0;
}
