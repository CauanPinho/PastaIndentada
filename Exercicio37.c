#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media durante a viagem (km/h): ");
    scanf("%f", &velocidade);

    // Calcula a distância percorrida
    distancia = tempo * velocidade;

    // Calcula a quantidade de combustível (12 km/L)
    litros = distancia / 12.0;

    printf("\nDistancia percorrida: %.2f km\n", distancia);
    printf("Combustivel gasto: %.2f litros\n", litros);

    return 0;
}

