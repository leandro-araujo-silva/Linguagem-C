#include <stdio.h>

int main() {
    int vetor[4];
    int maior = 0;

    printf("Digite numeros: \n");

    for(int i = 0; i < 4; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior valor e: %d\n", maior);

    return 0;

}