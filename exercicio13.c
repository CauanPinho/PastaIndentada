#include <stdio.h>
#include <math.h>

int main(){

    float x,aumento;


    printf("digite o valor do seu salário");
    scanf("%f",&x);

    aumento= (125 * x)/100;

    printf("parabens vc trabalhou bastente e seu valor de salario novo:  %.f",aumento);

    return 0;
}
