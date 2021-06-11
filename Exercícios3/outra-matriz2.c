#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int matriz[100][100], transposta[100][100];
    int n, valor, rdesejado;
    char letra;

    //printf("Digite a letra: ");
    scanf("%c", &letra);
    letra = getchar();

    //printf("Digite um numero: ");
    scanf("%d", &n);

    // Matriz original
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //printf("matriz[%d][%d]: ", i, j);
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

    //printf("Digite o resultado desejado: ");
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

    printf("S\n");

	return 0;
}