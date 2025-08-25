#include <stdio.h>
#include <math.h>

float salariomin=1500;
float salariofunc;
float dif;
int main()
{
    printf("digite o valor do seu salario");
    scanf("%f",&salariofunc);
    dif= (salariofunc/salariomin);
    printf(" seu salario equivale em relação ao salario minimo %.f vezes",dif);
}
