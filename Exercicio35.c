#include <stdio.h>

int main() {
    int apartamentos;
    float diaria, diariaPromo, total100, total70, perda;

    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &apartamentos);

    printf("Digite o valor da diaria por apartamento (final de semana completo): R$ ");
    scanf("%f", &diaria);

    // Desconto de 25%
    diariaPromo = diaria * 0.75;

    // Total com 100% de ocupação
    total100 = diariaPromo * apartamentos;

    // Total com 70% de ocupação
    total70 = total100 * 0.70;

    // Quanto o hotel deixa de arrecadar com a promoção (100% de ocupação)
    perda = (diaria - diariaPromo) * apartamentos;

    printf("\nValor promocional da diaria: R$ %.2f\n", diariaPromo);
    printf("Total arrecadado com 100%% de ocupacao: R$ %.2f\n", total100);
    printf("Total arrecadado com 70%% de ocupacao: R$ %.2f\n", total70);
    printf("Valor que o hotel deixou de arrecadar (100%% ocupacao): R$ %.2f\n", perda);

    return 0;
}
