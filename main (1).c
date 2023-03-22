#include <stdio.h>

int main() {
    float matriz[4][4];
    float somaImpares = 0, mediaPares = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int j = 1; j < 4; j += 2) {
        for (int i = 0; i < 4; i++) {
            somaImpares += matriz[i][j];
        }
    }

    for (int j = 0; j < 4; j += 2) {
        float somaPares = 0;
        for (int i = 0; i < 4; i++) {
            somaPares += matriz[i][j];
        }
        mediaPares += somaPares / 4;
    }
    mediaPares /= 2;

    printf("\nA soma dos elementos das colunas ímpares é: %.2f\n", somaImpares);
    printf("A média aritmética dos elementos das colunas pares é: %.2f\n", mediaPares);

    return 0;
}


