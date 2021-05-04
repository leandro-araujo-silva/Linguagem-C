#include <stdio.h>

void imprime_par(int a[], int i) {
    if(i == -1) {
        return;
    }

    // imprime_par(a, i-1);                   //Imprimindo de frente pra trás

    if(a[i] % 2 == 0) {
        printf("%d\n", a[i]);
    }

    return imprime_par(a, i-1);    //Imprimindo de trás pra frente
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

    imprime_par(array, 9);

    return 0;
}