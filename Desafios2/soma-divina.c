#include <stdio.h>

int main() {
    int n, resultado;
    int matriz1[500][500], matriz2[500][500];

    scanf("%d", &n);

    if (n == 0) {
        printf("Vazia\n");
        return 0;
    }

    for (int l = 0; l < n; ++l) {
        for (int c = 0; c < n; ++c) {
            scanf("%d", &matriz1[l][c]);
        }
    }

    for (int l1 = 0; l1 < n; ++l1) {
        for (int c1 = 0; c1 < n; ++c1) {
            scanf("%d", &matriz2[l1][c1]);
        }
    }

     for (int r = 0; r < n; ++r) {
        for (int s = 0; s < n; ++s) {
            resultado = matriz1[r][s] + matriz2[r][s];
            printf("%d\n", resultado);
        }
    }

    return 0;

}