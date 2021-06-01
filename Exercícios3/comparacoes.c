#include <stdio.h>

int main() {
    int vetor[5];
    int maior=0, menor=0, igual=0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int j = 1; j < 5; j++) {
        if (vetor[j] > vetor[0]) {
            maior++;
        } else if (vetor[j] < vetor[0]) {
            menor++;
        } else if (vetor[j] == vetor[0]) {
            igual++;
        }
    }

    printf("Quantidade de numeros maiores que %d: %d\n", vetor[0], maior);
    printf("Quantidade de numeros menores que %d: %d\n", vetor[0], menor);
    printf("Quantidade de numeros iguais a %d: %d\n", vetor[0], igual);

    return 0;

}