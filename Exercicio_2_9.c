#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDeVerificacao;
  float notaA, notaB, notaC;
  float resultado;

  printf("Informe Seu numero de identificacao: ");
  scanf("%d", &numeroDeVerificacao);

  printf("Informe sua nota A: ");
  scanf("%f", &notaA);

  printf("Informe sua nota B: ");
  scanf("%f", &notaB);

  printf("Informe sua nota C: ");
  scanf("%f", &notaC);

  resultado = ( notaA + notaB + notaC)/3;

  if(resultado >=7){
    printf("Aluno %d aprovado com %.2f pontos",numeroDeVerificacao, resultado);
  } else if(resultado >= 4 && resultado < 7){
        printf("Aluno %d ficou de recuperacao com %.2f pontos",numeroDeVerificacao, resultado);
  } else{
        printf("Aluno %d reprovado com %.2f pontos", numeroDeVerificacao, resultado);
  }

    return 0;
}
