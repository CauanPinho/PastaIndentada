#include <stdio.h>
#include <math.h>

int main(){

    float x;
    float ladoquad;

    printf("Digite o lado desse quadrado");
    scanf("%f",&x);

    ladoquad=x * sqrt(2);

    printf("%f",ladoquad);
    return 0;
}
