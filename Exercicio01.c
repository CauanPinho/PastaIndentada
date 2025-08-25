#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x,y,z;
    printf("Digite um numero");
    scanf("%d",&x);
    printf("Digite um numero");
    scanf("%d",&y);
    z=x+y;
    printf("A soma dos numeros mencionados acima são %d:\n",z);
    return 0;

}
