#include <stdio.h>
#include <stdlib.h>

int main()
{
   int quantidadeFrangos;

   printf("Insira a quantidade de frangos na granja: ");
   scanf("%d", &quantidadeFrangos);

   printf("A granja ira gastar cerca de R$ %.2f para marcar todos os frangos", (float) (quantidadeFrangos*4) + (quantidadeFrangos*3.5)*2);
    return 0;
}
