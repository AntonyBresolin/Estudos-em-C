#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool validarTriangulo(float valor1, float valor2, float valor3){
    if((valor3 - (valor1 + valor2)) <= 0 && (valor2 - (valor3 + valor1)) <= 0 && (valor1 - (valor2 + valor3))<= 0){
        return true;
    } else {
        return false;
    }
}

int main()
{
  float notaX, notaY, notaZ;
  float resultado;

  printf("Informe o valor do lado X:  ");
  scanf("%f", &notaX);

  printf("Informe o valor do lado Y: ");
  scanf("%f", &notaY);

  printf("Informe o valor do lado Z: ");
  scanf("%f", &notaZ);

  if(validarTriangulo(notaX, notaY, notaZ)){

    if(notaX == notaY && notaX == notaZ){
        printf("O triangulo e equilatero");
        return 0;
    } else if(notaX == notaY || notaY == notaZ || notaX == notaZ){
        printf("O triangulo e isoceles");
        return 0;
    } else if(notaX != notaY && notaY != notaZ && notaX != notaZ){
        printf("O triangulo e escaleno");
    }
   } else{
   printf("A figura nao e um triangulo");
   }

  return 0;
}

