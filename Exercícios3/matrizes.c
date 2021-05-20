#include <stdio.h>

void leia_matriz(int matriz[5][5]) {
    int valor;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

void soma_matrizes(int m1[5][5], int m2[5][5], int resposta[5][5]) {
    int valor;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            valor = m1[i][j] + m2[i][j];
            resposta[i][j] = valor;
        }
    }
}

int main() {
    int a[5][5], b[5][5], c[5][5], d[5][5];
    int r1[5][5], r2[5][5], r3[5][5];
    int valor1, valor2, valor3;

    printf("Leitura da matriz A\n");
    leia_matriz(a);

    printf("Leitura da matriz B\n");
    leia_matriz(b);   

    printf("Leitura da matriz C\n");
    leia_matriz(c);

    printf("Leitura da matriz D\n");
    leia_matriz(d);

    soma_matrizes(a, b, r1);
    soma_matrizes(c, d, r2);
    soma_matrizes(a, c, r3);

    printf("Resultado 1: \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            valor1 = r1[i][j];

            printf("%d ", valor1);
        }
        printf("\n");
    }

    printf("Resultado 2: \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            valor2 = r2[i][j];

            printf("%d ", valor2);
        }
        printf("\n");
    }

    printf("Resultado 3: \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            valor3 = r1[i][j];

            printf("%d ", valor3);
        }
        printf("\n");
    }

    return 0;   
}
