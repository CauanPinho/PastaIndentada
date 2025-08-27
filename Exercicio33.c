#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcancar (em metros): ");
    scanf("%f", &alturaDesejada);

    quantidadeDegraus = alturaDesejada / alturaDegrau;

    printf("O usuario devera subir %d degraus para alcancar a altura desejada.\n", quantidadeDegraus);

    return 0;
}

