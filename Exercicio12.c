#include <stdio.h>
#include <math.h>

int main(){

    float x,imposto;


    printf("digite o valor do seu salário");
    scanf("%f",&x);

    imposto= (5 * x)/100;

    printf("todos nós sabemos que o imposto é roubo mas n podemos fazer nada, entao ja sabe pague de imposto o valor de : %.f",imposto);

    return 0;
}
