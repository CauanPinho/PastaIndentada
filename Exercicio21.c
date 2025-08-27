#include <stdio.h>
/*Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
valor de B, B fique com o valor de C e C fique com o valor de A.*/

int main() {
    int a,b,c;
    printf("Digite o valor de a");
    scanf("%d",&a);
     printf("Digite o valor de b");
    scanf("%d",&b);
     printf("Digite o valor de c");
    scanf("%d",&c);


    a=b;
    b=c;
    c=a;

    printf("%d",a);
    return 0;

}

