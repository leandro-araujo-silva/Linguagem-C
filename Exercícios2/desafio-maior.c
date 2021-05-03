#include <stdio.h>

/*

Retorna o indice do elemento que contém o maior valor
a     - array
i     - indice do array a ser analisado na função
tam   - tamanho do array
i_maior     -indice do maior elemento encontrado até então

*/

int maior(int a[], int i, int tam, int i_maior){
    if(i == tam) {
        return i_maior;
    }

    if (a[i] > a[i_maior]) {
        i_maior = i;
    }

    return maior(a, i+1, tam, i_maior);
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

    printf("O indice com maior numero e o %d\n", maior(array, 1, 10, 0));

    return 0;
}