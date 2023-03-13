#include <stdio.h>
#include <stdlib.h>

int main()
{
    int litrosSuco;

    printf("Qual a quantidade de suco que deseja produzir: ");
    scanf("%d", &litrosSuco);


    printf("Sera necessario de %.2f L de agua e %.2f L de suco de maracuja para produzir %d L de refresco", (float)(litrosSuco*800)/1000, (float) (litrosSuco*200)/1000, litrosSuco);
    return 0;
}
