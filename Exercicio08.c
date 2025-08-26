#include <stdio.h>
#include <math.h>



int main()

{
    float x,y,z;
    printf("Digite um  numero");
    scanf("%f",&x);
    z=pow( x, 2);
    y=sqrt(x);


    printf("a potencia quadrada é %.f\n",z);
    printf("a raiz desse numero é %.f\n",y);
    return 0;
}
