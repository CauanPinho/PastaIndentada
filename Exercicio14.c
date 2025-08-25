#include <stdio.h>

int main(void)
{
    double peso_kg;
    double peso_g, novo_peso_g;

    printf("Peso da pessoa (em kg): ");
    scanf("%lf", &peso_kg);

    peso_g       = peso_kg * 1000.0;
    novo_peso_g  = peso_g * 1.05; // engordou 5%

    printf("\nPeso em gramas: %.2f g\n", peso_g);
    printf("Novo peso (5%% a mais): %.2f g\n", novo_peso_g);

    return 0;
}
