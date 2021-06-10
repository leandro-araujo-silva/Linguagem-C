#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[100];
    int aux;

    srand(time(NULL));

    for(int i = 0; i < 100; i++) {
        vetor[i] = rand() % 1000;
    }

    printf("Ordem atual dos itens no array\n");

    for(int j = 0; j < 100; j++) {
        printf("%4d", vetor[j]);        // Pular 4 casas decimais
    }

    // Algoritmo de ordenação Bubblesort

    for(int contador = 1; contador < 100; contador++) {
        for (int t = 0; t < 100; t++) {
            if (vetor[t] > vetor[t + 1]) {
                aux = vetor[t];
                vetor[t] = vetor[t + 1];
                vetor[t+1] = aux;
            }
        }
    }

    printf("\nNumeros ordenados\n");

    for(int j = 0; j < 100; j++) {
        printf("%4d", vetor[j]); 
    }

    return 0;
}