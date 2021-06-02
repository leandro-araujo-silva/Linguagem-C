#include <stdio.h>

int main() {
    int vetor[4];
    int menor = 10000;

    printf("Digite numeros: \n");

    for(int i = 0; i < 4; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor valor e: %d\n", menor);

    return 0;

}