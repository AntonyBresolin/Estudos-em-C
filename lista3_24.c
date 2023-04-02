#include <stdio.h>
#include <stdlib.h>



int main()
{

    int canal3=0, canal5=0, canal8=0, canal11=0, canal13=0, canalAtual = 0;
    int quantidadePessoas = 0, quantidadeCasas = 0;
    int continuarPesquisa = 0;
    float somaTodos = 0;

    while(continuarPesquisa != 1){
        quantidadeCasas++;
        printf("Digite o canal assistido ( 3, 5, 8, 11 ou 13 ): ");
        scanf("%d", &canalAtual);
        printf("Quantas pessoas vivem em sua residencia: ");
        scanf("%d", &quantidadePessoas);

        switch(canalAtual){
        case 3:
            canal3+= quantidadePessoas;
            break;
        case 5:
            canal5+= quantidadePessoas;
            break;
        case 8:
            canal8+= quantidadePessoas;
            break;
        case 11:
            canal11+= quantidadePessoas;
            break;
        case 13:
            canal13+= quantidadePessoas;
            break;
        }

        printf("Deseja continuar a pesquisa?\n0 - Continuar Pesquisa\n1 - Finalizar Pesquisa\n");
        scanf("%d", &continuarPesquisa);
    }
    somaTodos = canal3 + canal5 + canal8 + canal11 + canal13;

    printf("A porcentagem de assistidos do: \n3 - %.2f\n5 - %.2f\n8 - %.2f\n11 - %.2f\n13 - %.2f", (float) ((canal3*100)/somaTodos), (float) ((canal5*100)/somaTodos), (float) ((canal8*100)/somaTodos), (float) ((canal11*100)/somaTodos),(float) ((canal13*100)/somaTodos));


    return 0;
}
