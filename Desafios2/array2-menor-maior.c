#include <stdio.h>
#include <stdlib.h>

int Menor(int x[]) {
    int menor = x[0];

    for (int j = 0; j < 6; j++) {
        if (x[j] < menor) {
            menor = x[j];
        }
    }

    return menor;
}

int Maior(int x[]) {
    int maior = x[0];

    for (int j = 0; j < 6; j++) {
        if (x[j] > maior) {
            maior = x[j];
        }
    }

    return maior;
}

int main() {
    int number[6];
    int valorMenor, valorMaior;
   
    for(int i = 0; i < 6; i++) {
        scanf("%d", &number[i]);
    }

    valorMenor = Menor(number);

    valorMaior = Maior(number);

    printf("%d\n", valorMenor);
    printf("%d\n", valorMaior);

    return 0;
}