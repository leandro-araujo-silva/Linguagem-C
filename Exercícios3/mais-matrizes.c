#include <stdio.h>

int main() {
    int a[100][100], b[100][100];
    int soma[100];
    int n, acum1 = 0, acum2 = 0, valor2, valor;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &valor);
            a[i][j] = valor;
            acum1 += a[i][j];   
        }
    }

    
    for(int l = 0; l < n; ++l) {
        for (int c = 0; c < n; ++c) {
            printf("B[%d][%d]: ", l, c);
            scanf("%d", &valor2);
            b[l][c] = valor2;
            acum2 += b[l][c];   
        }
    }

    if (acum1 == acum2) {
        printf("SIM\n");
    } else {
        printf("N%cO", 199);
    }

    return 0;
}