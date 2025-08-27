#include <stdio.h>
#include <math.h>  // necessário para pow()

int main() {
    float P, i, valor;
    int n;

    printf("Digite o valor da aplicacao mensal (P): R$ ");
    scanf("%f", &P);

    printf("Digite a taxa mensal (em %%): ");
    scanf("%f", &i);

    printf("Digite o numero de meses (n): ");
    scanf("%d", &n);

    i = i / 100.0;  // transforma percentual em decimal

    valor = (P * (pow(1 + i, n) - 1)) / i;

    printf("Valor acumulado apos %d meses: R$ %.2f\n", n, valor);

    return 0;
}

