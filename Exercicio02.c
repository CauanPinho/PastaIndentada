#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x,y,z;
    printf("Digite um numero");
    scanf("%d",&x);
    printf("Digite um numero");
    scanf("%d",&y);
    z=x-y;
    printf("A subtra��o entre os dois numeros � %d:",z);
    return 0;

}
