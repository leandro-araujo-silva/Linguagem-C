#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int soma, mat[5][10], somaLinhas[5], somaColunas[10];

    srand(time(NULL));

    for(int l = 0; l < 5; l++) {
        for(int c = 0; c < 10; c++) {
            mat[l][c] = rand() % 100;
        }
    }

    // Soma das linhas
    for(int l = 0; l < 5; l++) {
        soma = 0;
        for(int c = 0; c < 10; c++) {
            soma += mat[l][c];
        }
        somaLinhas[l] = soma;
    }

    // Soma das colunas 
    for (int c = 0; c < 10; c++) {
        soma = 0;
        for(int l = 0; l < 5; l++) {
            soma += mat[l][c];
        }
        somaColunas[c] = soma;
    }

    // Impressão da Matriz
    printf("\nMatriz:\n");

    for(int l = 0; l < 5; l++) {
        for(int c = 0; c < 10; c++) {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\nVetor com a soma das linhas:\n");
    for (int l = 0; l < 5; l++) {
        printf("Linha %d: %d\n", l, somaLinhas[l]);
    }

    printf("\n\nVetor com a soma das colunas:\n");
    for(int c = 0; c < 10; c++) {
        printf("Coluna %d: %d\n", c, somaColunas[c]);
    }

    return 0;
}