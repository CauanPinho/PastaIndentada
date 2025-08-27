#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor, base;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    // Primeiro aplica os impostos (45% sobre o custo de fábrica)
    base = custoFabrica * (1 + 0.45);

    // Depois aplica a porcentagem do distribuidor (28% sobre o resultado)
    custoConsumidor = base * (1 + 0.28);

    printf("O custo ao consumidor do carro e: R$ %.2f\n", custoConsumidor);

    return 0;
}

