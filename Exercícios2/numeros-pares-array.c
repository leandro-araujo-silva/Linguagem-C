#include <stdio.h>

void ePar(int a[], int i, int tamanho) {
    if(i == tamanho) {
        return;
    }

    if(a[i] % 2 == 0) {
        printf("%d", a[i]);
    }

    return ePar(a, i+1, tamanho);
}

void ler_array(int a[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    }

    scanf("%d", &a[i]);

    ler_array(a, i + 1, tamanho);
}

int main() {
    int array[10];

    ler_array(array, 0, 10);

    ePar(array, 0, 10);

    return 0;
}