#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int matriz[100][100], transposta[100][100];
    int n, valor, rdesejado, somabaixo = 0, somacima = 0;
    char letra;

    printf("Digite a letra: ");
    scanf("%c", &letra);
    getchar();

    printf("Digite um numero: ");
    scanf("%d", &n);

    // Matriz original
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }


    // Matriz transposta
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Somando em cima e em baixo 
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i > j) {
                somabaixo += transposta[i][j];
            } else if (i < j) {
                somacima += transposta[i][j];
            } 
        }
    }

    printf("Digite o resultado desejado: ");
    scanf("%d", &rdesejado);

    // Imprimindo matriz transposta

    for (int l = 0; l < n; ++l) {
        for (int c = 0; c < n; ++c) {
            if (c == n - 1) {
               printf("%d", transposta[l][c]); 
            } else {
                printf("%d ", transposta[l][c]);
            }
        }
        printf("\n");
    }

    if (letra == 'C' && somacima == rdesejado || letra == 'B' && somabaixo == rdesejado) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    /*

    printf("Soma cima: %d\n", somacima);
    printf("Soma abaixo: %d\n", somabaixo);

    */

    return 0;
}