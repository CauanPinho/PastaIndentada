#include <stdio.h>
#include <math.h>

int main()
{
    int AnoNasc;
    int AnoAtual;
    int idade;
    int Semanas;
    printf("digite o seu ano de nascimento");
    scanf("%d",&AnoNasc);
    printf("digite o seu ano de atual");
    scanf("%d",&AnoAtual);


    idade=(AnoAtual - AnoNasc);
    Semanas=52*idade;

    printf("Vc tem %d e isso equivale %d semanas",idade,Semanas);

    return 0;


}
