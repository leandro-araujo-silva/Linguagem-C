#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior = -10000, delta;
    int total = 0, d_principal = 0;
    double media;

    for (int l = 0; l < 3; ++l) {
        for (int c = 0; c < 3; ++c) {
            scanf("%d", &matriz[l][c]);
            total += matriz[l][c];

            if (matriz[l][c] > maior) {
                maior = matriz[l][c];
            }
        }
    }

    if (maior > 0) {
        delta = 1;
    } else if (maior == 0) {
        delta = 0;
    } else {
        delta = -1;
    }

    d_principal = matriz[0][0] + matriz[1][1] + matriz[2][2];

    media = total / 9.0;
    
    printf("%.2lf %d %d %d\n", media, maior, delta, d_principal);
    
    return 0;
}