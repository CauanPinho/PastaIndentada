#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int x,y;
    float w;
    printf("Digite uma nota(essa tem peso 2)");
    scanf("%d",&x);
    printf("Digite um nota(essa tem peso 1");
    scanf("%d",&y);

    w=(x*2) + (y*1) /3;
    printf("A media ponderada entre essas 2 notas é:%.f",w);

}
