#include <stdio.h>

int main() {
    int A, B, C, aux;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Troca sequencial
    aux = A;
    A = B;
    B = C;
    C = aux;

    printf("Novo valor de A: %d\n", A);
    printf("Novo valor de B: %d\n", B);
    printf("Novo valor de C: %d\n", C);

    return 0;
}

