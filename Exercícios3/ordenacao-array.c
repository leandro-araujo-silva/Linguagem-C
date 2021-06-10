#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main() {
    int numeros[TAM];
    int aux, contador;

    printf("Entre com tres numeros para preencher o array: \n");
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual dos itens no array:\n");

    for(int j = 0; j < TAM; j++) {
        printf("%4d", numeros[j]);        // Pular 4 casas decimais
    }

    // Algoritmo de ordenação Bubblesort

    for(contador = 1; contador < TAM; contador++) {
        for (int t = 0; t < TAM; t++) {
            if (numeros[t] > numeros[t + 1]) {
                aux = numeros[t];
                numeros[t] = numeros[t + 1];
                numeros[t+1] = aux;
            }
        }
    }

    printf("\nNumeros ordenados\n");

    for(int j = 0; j < TAM; j++) {
        printf("%4d", numeros[j]); 
    }

    return 0;
}