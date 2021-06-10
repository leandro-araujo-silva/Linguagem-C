#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10];
    int soma = 0, valor;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
            soma += matriz[i][j]; 
        }
    }

    // Apresentando os elementos
    for(int c = 0; c < 5; c++) {
        for(int l = 0; l < 7; l++) {
            printf("Matriz[%d][%d] = %d\n", c, l, matriz[l][c]);
        } 
    }

    printf("A soma de todos os elementos e: %d\n", soma);

    return 0;
}
