#include <stdio.h>

int main() {
    int total, votos1, votos2, nulos;
    float perc1, perc2, percNulos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &total);

    printf("Digite o numero de votos do candidato 1: ");
    scanf("%d", &votos1);

    printf("Digite o numero de votos do candidato 2: ");
    scanf("%d", &votos2);

    nulos = total - (votos1 + votos2);

    perc1 = (votos1 * 100.0) / total;
    perc2 = (votos2 * 100.0) / total;
    percNulos = (nulos * 100.0) / total;

    printf("\nPercentual de votos do candidato 1: %.2f%%\n", perc1);
    printf("Percentual de votos do candidato 2: %.2f%%\n", perc2);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);

    return 0;
}

