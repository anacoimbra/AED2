#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(int argc, char *argv[])
{

    PGM *cena;
    PGM *objeto;
    Ponto x;

    if (argv[1]==NULL || argv[2]==NULL || argv[3]==NULL)
    {
        printf("Voce esqueceu de colocar o nome de algum dos arquivos! \n");
        printf("Tente novamente! \n\n");
        exit(1);
//Resolve o erro do programa fechar se algum dos arquivos forem null
    }

    cena = LePGM(argv[1]);
    objeto = LePGM(argv[2]);


    x = JanelaDeslizante(cena,objeto);

    printf("Pontos: %d %d \n",x);

    grava_pontos(x,argv[3]);

    libera_pgm(objeto);
    libera_pgm(cena);

    return 0;
}
