#include <stdio.h>

int main () {
    int tam = 7;
    int mat[tam][tam];

    srand (time(NULL));

    // Preenche a matriz gerando valores
    for(int l = 0; l < tam; l++) {
        for (int c = 0; c < tam; c++) {
            mat[l][c] = rand() % 100;
        }
    }

    // Imprime a matriz na tela
    for(int l = 0; l < tam; l++) {
        for (int c = 0; c < tam; c++) {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal principal: ");
    for(int l = 0; l < tam; l++) {
        printf("%d ", mat[l][l]);
    }

    printf("\n\nDiagonal secundaria: ");
    for(int l = 0; l < tam; l++) {
        printf("%d ", mat[l][tam - 1 - l]);
    }
    printf("\n");

    return 0;
}