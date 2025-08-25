#include <stdio.h>

int main(void)
{
    double salario_minimo, kwh_gasto;
    double preco_kwh, valor_conta, valor_com_desconto;

    printf("Salario minimo (R$): ");
    scanf("%lf", &salario_minimo);

    printf("Consumo (em kWh): ");
    scanf("%lf", &kwh_gasto);

    preco_kwh = salario_minimo / 5.0;

    valor_conta = preco_kwh * kwh_gasto;
    valor_com_desconto = valor_conta * 0.85;

    printf("\nValor de 1 kWh: R$ %.2f\n", preco_kwh);
    printf("Valor a pagar: R$ %.2f\n", valor_conta);
    printf("Valor com 15%% de desconto: R$ %.2f\n", valor_com_desconto);

    return 0;
}
