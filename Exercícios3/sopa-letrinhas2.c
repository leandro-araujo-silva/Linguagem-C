#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alfabeto[27][10000];
    char letra = 65;

    //printf("%c\n", letra);

    for(int i = 0; i < 27; i++) {
        alfabeto[i][10000] = letra;
        letra++;
    }

    alfabeto[26][10000] = '\0'; 

    printf("=== TODAS AS LETRAS DO ALFABETO ====================\n\n");
    for(int j = 0; j < 27; j++) {
        printf("%c ", alfabeto[j][10000]);
    }

    printf("\n\n====================================================\n\n");

    // Adicionando números nas colunas
    for(int c = 0; c < 10; c++) {
        alfabeto[26][c] = c + 1;
    }

    // Imprimindo linhas com colunas
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Matriz[%c][%d]: %d \n", 65 + i, j, j + 1);
        }
    }

    return 0;

}