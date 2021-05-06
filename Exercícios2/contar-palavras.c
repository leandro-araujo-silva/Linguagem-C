#include <stdio.h>

void contar(char array[], int tamanho, int i, int cont, int palavraComecou) {
    if (i == tamanho) {
        printf("\n%d\n", cont);
    } else {
        if (array[i] != ' ') {
            if (palavraComecou == 0) {
                cont = cont + 1;
                palavraComecou = 1;
            }
        } else {
            palavraComecou = 0;
        }

        contar(array, tamanho, i + 1, cont, palavraComecou);
    }
}

int ler(char array[], int i) {
    scanf("%c", &array[i]);

    if(array[i] == '\n') {
        return 1;
    } else {
        return ler(array, i+1);
    }
}

int main() {
    char array[500];

    int tamanho = ler(array, 0);

    contar(array, tamanho, 0, 0, 0);

    return 0;
}

