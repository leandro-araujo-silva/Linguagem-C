#include <stdio.h>

void leia_matriz(int matriz[][10], int col) {
    int valor;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < col; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

int somar_matriz_linha(int matriz[][10], int linha, int col) {
    int soma = 0;

    for(int i = linha; i <= linha; i++) {
        for (int j = 0; j < col; j++) {
            soma += matriz[i][j];
            //printf("\nSoma[%d][%d]: %d\n", i, j, soma); 
        }
    }

    return soma;
}

int main() {
    int matriz[5][10];
    int somarLinhas[5], somarColunas[10];

    leia_matriz(matriz, 5);

    // Soma das linhas

    for(int i = 0; i < 2; i++) {
        somarLinhas[i] = somar_matriz_linha(matriz, i, 5);
        printf("SomaLinha[%d] = %d\n", i, somarLinhas[i]);
    }

    // Soma das colunas
    
    return 0;    
}