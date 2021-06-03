#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leia_matriz(int matriz[3][3]) {
    int valor;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

void leia_linha(int matriz [3][3], int linha, char escolha) {
    double soma=0.0;
    double media;

    for(int i = linha; i == linha; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j]; 
        }
    }

    media = soma/3.0;

    if(escolha == 's' || escolha == 'S') {
        printf("Soma: %.1lf\n", soma);
    } else if (escolha == 'm' || escolha == 'M') {
        printf("Media: %.1lf\n", media);
    }
}

int main() {
    int matriz[3][3];
    int linha;
    char escolha;

    printf("Selecione uma linha: ");
    scanf("%d", &linha);

    printf("Soma ou Media: [S/M] ");
    scanf("%c", &escolha);

    escolha = getchar();

    printf("A escolha foi %c\n", escolha);

    printf("Leitura da matriz\n");
    leia_matriz(matriz);

    leia_linha(matriz, linha, escolha);

    return 0;
}