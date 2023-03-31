#include <stdio.h>
#include <stdlib.h>

int main()
{
  float altura;
  char sexo [1];

    printf("digite sua altura: ");
    scanf("%f", &altura);


  while(sexo != "M" && sexo != "F"){
    printf("Selecione seu sexo\nM - Masculino e F - Feminino\n");
    scanf("%s", sexo);
    if(sexo == "M"){
        printf("%.2f", (72.7 * altura) - 58);
        break;
    } else{
        printf("%.2f", (62.1 * altura) - 44.7);
        break;
    }
  }

    return 0;
}
