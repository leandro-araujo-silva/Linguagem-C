#include <stdio.h>

int main() {
    int vet[3];
    int vetImpar[3];
    int cont = 0;

    printf("Digite numeros: \n");

    for(int i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
    }

    for(int j = 0; j < 3; j++) {
        if(vet[j] % 2 != 0) {
            vetImpar[cont] = vet[j];
            printf("Os numeros impares sao: %d\n", vetImpar[cont]);
            cont++;
        }
    }

    return 0;
}