#include <stdio.h>

void imprimir_array(int x[], int atual, int tam) {
    if(atual == tam){
        return;
    }

    imprimir_array(x, atual + 1, tam);
    if(atual == 0) {
        printf("%d\n", x[atual]);
    } else {
        printf("%d ", x[atual]);
    }

}

void ler_array(int x[], int atual, int tam) {
    if (atual == tam) {
        return;
    }

    scanf("%d", &x[atual]);
    ler_array(x, atual + 1, tam);
}

int main() {
    int a[10000];

    int n;
    scanf("%d", &n);

    ler_array(a, 0, n);

    imprimir_array(a, 0, n);

    return 0;
}