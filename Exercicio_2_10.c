#include <stdio.h>
#include <stdlib.h>

int main()
{
  float numeroA, numeroB;

  printf("Informe 1 n�mero: ");
  scanf("%f", &numeroA);

  printf("Informe outro n�mero: ");
  scanf("%f", &numeroB);


  if(numeroA > numeroB){
    printf("O valor da diferenca desses numeros e igual a: %.2f", (numeroA - numeroB));
  } else{
    printf("O valor da diferenca desses numeros e igual a: %.2f", (numeroB - numeroA));
  }

    return 0;
}
