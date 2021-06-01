#include <stdio.h>
#include <locale.h>

void checarImpar(int vet[], int impar[], int i, int cont) {

    if (vet[i] > 3) {

        for(int i = 0; i < 3; i++) {
            printf("Os numeros impares sao: \n");
            printf("%d\n", impar[i]);
            return;
        }
    }

    if(vet[i] % 2 != 0) {
        impar[cont] = vet[i];
        checarImpar(vet, impar, i+1, cont+1);
    }

    checarImpar(vet, impar, i+1, cont);
}

int main() {
    int vet[10];
    int vetImpar[10];

    for(int i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
    }

    checarImpar(vet, vetImpar, 0, 0);

    return 0;
}