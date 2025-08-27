#include <stdio.h>

int main() {
    float valorCompra, prestacao;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    prestacao = valorCompra / 5;

    printf("O valor de cada prestacao (5x sem juros) e: R$ %.2f\n", prestacao);

    return 0;
}

