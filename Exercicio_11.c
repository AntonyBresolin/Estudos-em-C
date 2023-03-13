#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaSemAcidente,dias = 0, meses = 0, anos= 0;



    printf("Informe a quantidade de dias sem acidentes de trabalho: ");
    scanf("%d", &diaSemAcidente);
    dias = diaSemAcidente;

    if(diaSemAcidente >= 30){
        meses = diaSemAcidente/30 - 1;

        diaSemAcidente = dias - meses*30;

        if(meses > 12){
            anos = meses/12;
            meses = meses - anos*12;
        }
    }

    diaSemAcidente = dias - (meses*30) - (anos*365);

    printf("estamos a : \n%d anos \n%d  meses \n%d dias sem acidentes", anos, meses, diaSemAcidente);

    return 0;
}
