#include <stdio.h>
#include <locale.h>
#include <math.h>



int main()

{
    float x,y,z;
    printf("Digite um  numero");
    scanf("%f",&x);
    z=pow( x, 2);
    y=sqrt(x);


    printf("a potencia quadrada � %.f\n",z);
    printf("a raiz desse numero � %.f\n",y);
    return 0;
}
