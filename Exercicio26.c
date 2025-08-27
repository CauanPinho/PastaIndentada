#include <stdio.h>

int main() {
    float distancia, velocidade, tempo, vel_ms;

    printf("Digite a distancia entre os dois pontos (km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;      // tempo em horas
    vel_ms = velocidade / 3.6;           // conversão para m/s

    printf("Tempo medio de viagem: %.2f horas\n", tempo);
    printf("Velocidade em metros por segundo: %.2f m/s\n", vel_ms);

    return 0;
}

