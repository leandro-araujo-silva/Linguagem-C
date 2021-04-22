#include <stdio.h>

void ler(int a[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    }

    scanf("%d", &a[1]);

    ler(a, i + 1, tamanho);
}

int procurar(int x, int a[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }

    if (a[tamanho - 1] == x) {
        return 1 + procurar(x, a, tamanho - 1);
    } 
    else {
        return procurar(x, a, tamanho - 1);
    } 
}

int main() {
    int numeros[10];
    int x, quantidade;

    ler(numeros, 0, 10);

    scanf("%d", &x);

    quantidade = procurar(x, numeros, 10);

    printf("%d\n", quantidade);

    return 0;
}