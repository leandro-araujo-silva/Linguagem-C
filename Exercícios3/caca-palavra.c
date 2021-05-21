#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leia_matriz(char alfabeto[][500], int l, int c) {
    int valor;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            //printf("Matriz[%c][%d]: ", 65 + i, j);
            scanf("%d", &valor);
            alfabeto[i][j] = valor;
        }
    }
}

int main() {
    char alfabeto[27][500];
    char letra = 65; 
    char texto[50];
    int t_palavra, linhas, colunas;
    int encontrou = 0;

    for(int i = 0; i < 27; i++) {
        alfabeto[i][500] = letra;
        letra++;
    }

    alfabeto[26][500] = '\0';

    //printf("Tamanho da palavra: ");
    scanf("%d", &t_palavra);

    //printf("Digite um texto: ");
    scanf("%s", &texto);

    //printf("Linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    leia_matriz(alfabeto, linhas, colunas);

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(strcmp(alfabeto[i][j], texto) == 0) {
                printf(i, j);
                encontrou = 1;
            }
        }
    } 

    if(!encontrou == 0) {
        printf("0\n");
    }

    return 0;
}