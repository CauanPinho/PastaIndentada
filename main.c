#include <stdio.h>
#include <Math.h>

/* 20) Uma determinada pessoa que trabalha com constru��o de piscinas precisa de um programa que
calcule o valor das constru��es solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser constru�da. Leve em considera��o que o
valor da constru��o � cobrado por m3 de �gua que a piscina conter� e o pre�o � de R$ 45.00 por m3*/

int main(){

    float c,l,p,v,preco;
    printf("Digite o comprimento da sua piscina");
    scanf("%f",&c);
   printf("Digite o largura da sua piscina");
    scanf("%f",&l);
   printf("Digite o profundidade da sua piscina");
    scanf("%f",&p);
    v=(c * l * p);
    printf("Sua piscina tem %f metros cubicos",v);
    preco=45*v;
    printf("Sua piscina custara em reais: %f",preco);
    return 0;


}
