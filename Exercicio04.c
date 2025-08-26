#include <stdio.h>


int main()
{
    int x,y,z;
    float w;
    printf("Digite uma nota");
    scanf("%d",&x);
    printf("Digite um nota");
    scanf("%d",&y);
    printf("Digite um nota");
    scanf("%d",&z);
    w=(x+y+z)/3;
    printf("A media aritmética entre esses 3 numeros é:%.f",w);

}
