#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leia_matriz(int matriz[][500], int tam) {
    int valor;

    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            //printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

/*

void leia_bomba(int matriz[][500], int tam, int l, int c, int raio) {
    for(int i = l; i < raio; i++) {

    }
}

*/

int main () {
    int matriz[500][500];
    int bomba[500][500];
    int b_linha, b_coluna, raio;
    int tamanho;

    //printf("Linha e colunas: ");
    scanf("%d", &tamanho);

    leia_matriz(matriz, tamanho);

    //printf("Coordenadas da bomba (linha): ");
    scanf("%d", &b_linha);
    //printf("Coordenadas da bomba (coluna): ");
    scanf("%d", &b_coluna);
    //printf("Raio da bomba: ");
    scanf("%d", &raio);

    

    if (raio < tamanho - 5 || raio == 5 - 2) {
        printf("Area segura correta\n");
    } else {
        printf("Area segura incorreta\n");
    }

    

    //leia_bomba(matriz, tamanho, b_linha, b_coluna, raio);

    return 0;
}