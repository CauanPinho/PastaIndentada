#include <stdio.h>
#include <math.h>

int main(){

    float x,imposto;


    printf("digite o valor do seu sal�rio");
    scanf("%f",&x);

    imposto= (5 * x)/100;

    printf("todos n�s sabemos que o imposto � roubo mas n podemos fazer nada, entao ja sabe pague de imposto o valor de : %.f",imposto);

    return 0;
}
