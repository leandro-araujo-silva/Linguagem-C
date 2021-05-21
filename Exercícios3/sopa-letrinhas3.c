#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alfabeto[27][10000];
    char letra = 65;
    int linhas, colunas;

    scanf("%d%d", &linhas, &colunas);

    //printf("%c\n", letra);

    for(int i = 0; i < linhas; i++) {
        alfabeto[i][10000] = letra;
        letra++;
    }

    alfabeto[linhas][10000] = '\0'; 

    printf("=== TODAS AS LETRAS DO ALFABETO ====================\n\n");
    for(int j = 0; j < linhas; j++) {
        printf("%c ", alfabeto[j][10000]);
    }

    printf("\n\n====================================================\n\n");

    // Adicionando números nas colunas
    for(int c = 0; c < colunas; c++) {
        alfabeto[26][c] = c + 1;
    }

    // Imprimindo linhas com colunas
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Matriz[%c][%d]: %d \n", 65 + i, j, j + 1);
        }
    }

    return 0;

}