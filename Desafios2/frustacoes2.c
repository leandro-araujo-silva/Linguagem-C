#include <stdio.h>

void loop3(int n, int h_marcado[], int h_felipe[], int i, int limite, int f, int ouro) {
    int diferenca;


    if (i==n) {
        printf("%d\n", ouro);
        return;
    }

    diferenca = h_felipe[i] - h_marcado[i];

    f += diferenca;
        
    if(f >= limite) {
        ouro += f;
        return loop3(n, h_marcado, h_felipe, i + 1, limite, 0, ouro);
    }    
    
    return loop3(n, h_marcado, h_felipe, i + 1, limite, f, ouro);
}

void loop2(int h_felipe[], int n, int i) {

    if (i==n) {
        return;
    }

    scanf("%d", &h_felipe[i]);

    return loop2(h_felipe, n, i+1);
}

void loop(int h_marcado[], int n, int i) {
    if (i==n) {
        return;
    }

    scanf("%d\n", &h_marcado[i]);

    return loop(h_marcado, n, i+1);
}

int main() {
    int encontros;
    int limite_de_atraso;
    int h_marcado[10000];
    int h_felipe[10000];

    scanf("%d%d", &encontros, &limite_de_atraso);

    loop(h_marcado, encontros, 0);

    loop2(h_felipe, encontros, 0);

    loop3(encontros, h_marcado, h_felipe, 0, limite_de_atraso, 0, 0);

    return 0;
}