#include <stdio.h>
#include <locale.h>

int main()
{


    setlocale(LC_ALL, "portuguese");
    int x,y,z;
    float w,s,r;
    printf("Digite uma nota");
    scanf("%d",&x);
    printf("Digite um nota");
    scanf("%d",&y);
    printf("Digite um nota");
    scanf("%d",&z);
    w=(x+y+z)/3;
    s=x+y+z;
    r=x%y;
    printf("A media aritmética entre esses 3 numeros é:%.f",w);
    printf("o somatorio entre elas é: %f",s);
    printf("o resto entre eles é: %f",r);
    return 0;
}
