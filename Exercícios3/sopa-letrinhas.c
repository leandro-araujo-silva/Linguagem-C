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

    printf("=== TODAS AS LETRAS DO ALFABETO ===\n\n");
    for(int j = 0; j < 27; j++) {
        printf("%c ", alfabeto[j][10000]);
    }

    printf("\n");

    return 0;

}