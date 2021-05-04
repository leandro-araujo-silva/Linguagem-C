#include <stdio.h>

void imprimir(int a[], int i, int tam) {
    if(i == tam) {
        return;
    }

    printf("%d\n", a[i]);

    imprimir(a, i + 1, tam);
}

void bubble(int a[], int i, int fim) {
    // função para percorrer todo o array, colocando o maior elemento nas últimas posições

    if (i < (fim - 1)) {
        if (a[i] > a[i+1]) {
            int aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
        }

        bubble(a, i+1, fim);
    }
}

void sort(int a[], int i, int tam){
    if (i < (tam - 1)) {
        // coloca o maior elemento na última posição do array
        bubble(a, i, tam);
        sort(a, i, tam - 1);
    }
}

void ler_array(int a[], int i, int tam) {
    if (i == tam) {
        return;
    }

    scanf("%d", &a[i]);

    ler_array(a, i+1, tam);
}

int main() {
    int a[10];

    ler_array(a, 0, 10);
    sort(a, 0, 10);
    imprimir(a, 0, 10);

    return 0;
}