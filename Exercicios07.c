#include <stdio.h>
#include <locale.h>
#include <math.h>



int main()

{
    int x,y,z;
    printf("Digite um  numero");

    scanf("%d",&x);
    printf("Digite um  numero");
    scanf("%d",&y);

    z=pow( x, y);
    printf("%d",z);
    return 0;
}
