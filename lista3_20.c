#include <stdio.h>
#include <stdlib.h>

int main()
{

  int quantidadeAlunos = 0;
  float notaUm = 0, notaDois = 0, media = 0;

  printf("Informe quantos alunos existem na sala");
  scanf("%d", &quantidadeAlunos);

    while(quantidadeAlunos != 0){
        printf("digite a primeira nota: ");
        scanf("%f", &notaUm);
        printf("digite a segunda nota: ");
        scanf("%f", &notaDois);

        media = (notaDois + notaUm)/2;

        if(media >= 6){
            printf("Aprovado\n");
        } else{
            printf("Reprovado");
        }
    }

    return 0;
}
