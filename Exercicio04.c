#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int x,y,z;
    float w;
    printf("Digite uma nota");
    scanf("%d",&x);
    printf("Digite um nota");
    scanf("%d",&y);
    printf("Digite um nota");
    scanf("%d",&z);
    w=(x+y+z)/3;
    printf("A media aritm�tica entre esses 3 numeros �:%.f",w);

}
