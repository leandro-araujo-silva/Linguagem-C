#include <stdio.h>

void loop3(int n, int h_marcado[], int h_felipe[], int i, int limite) {
    int f = 0;
    int diferenca;

    if (i==n) {
        return;
        //printf("%d\n", f);
    }

    diferenca = h_felipe[i] - h_marcado[i];

    f += diferenca;

    printf("%d\n", f);
    /*
    if(diferenca >= limite) {
        f = f + diferenca;
    }
    */

    return loop3(n, h_marcado, h_felipe, i + 1, limite);
}

void loop2(int n, int i, int h_marcado[], int l) {
    int h_felipe[7];

    if (i==n) {
        loop3(n, h_marcado, h_felipe, 0, l);
        
        return;
    }

    scanf("%d", &h_felipe[i]);

    return loop2(n, i+1, h_marcado, l);
}

void loop(int n, int i, int l) {
    int h_marcado[7];

    if (i==n) {
        loop2(n, 0, h_marcado, l);

        return;
    }

    scanf("%d\n", &h_marcado[i]);

    return loop(n, i+1, l);
}

int main() {
    int encontros;
    int limite_de_atraso;

    scanf("%d%d", &encontros, &limite_de_atraso);

    loop(encontros, 0, limite_de_atraso);

    return 0;
}