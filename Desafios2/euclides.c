#include <stdio.h>
#include <stdlib.h>

int euclides(int a, int d){
    int resto = a%d;
    if(resto != 0) {
        euclides(d, resto);
    } else {
        return d;
    }
}

int escanear(int nCasos) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    nCasos--;
    printf("MDC(%d,%d) = %d\n", n1, n2, euclides(n1, n2));
    if (nCasos > 0) {
        escanear(nCasos);
    } else {
        return 0;
    }
}

int main() {
    int nCasos;
    scanf("%d", &nCasos);
    escanear(nCasos);
    return 0;
}