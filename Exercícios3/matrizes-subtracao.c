#include <stdio.h>

void leia_matriz(int matriz[2][2]) {
    int valor;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

void subtracao_matrizes(int m1[2][2], int m2[2][2], int resposta[2][2]) {
    int valor;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            valor = m1[i][j] - m2[i][j];
            resposta[i][j] = valor;
        }
    }
}

int main() {
    int a[2][2], b[2][2];
    int r1[2][2], r2[2][2];
    int valor1, valor2;

    printf("Leitura da matriz A\n");
    leia_matriz(a);

    printf("Leitura da matriz B\n");
    leia_matriz(b);

    subtracao_matrizes(a, b, r1);
    subtracao_matrizes(b, a, r2);

    printf("\nSubtracao: a-b\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            valor1 = r1[i][j];

            printf("%d ", valor1);
        }
        printf("\n");
    }

    printf("\nSubtracao: b-a\n");
    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 2; c++) {
            valor2 = r2[l][c];

            printf("%d ", valor2);
        }
        printf("\n");
    }

    return 0;

}