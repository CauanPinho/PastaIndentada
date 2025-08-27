#include <stdio.h>

int main() {
    float valor, novo_valor;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    novo_valor = valor * 0.91;  // aplica desconto de 9%

    printf("O novo valor com desconto de 9%% é: R$ %.2f\n", novo_valor);

    return 0;
}

