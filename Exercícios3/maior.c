#include <stdio.h>

int main() {
    int number[3];
    int maior = -10000;
    int aux;

    for(int i = 0; i < 3; i++) {
        scanf("%d", &number[i]);

        if(number[i] > maior) {
            maior = number[i];
        }
    }

    for(int contador = 1; contador < 3; contador++) {
        for(int j = 0; j < 3; j++) {
            if (number[j] > number[j+1]) {
                aux = number[j];
                number[j] = number[j+1];
                number[j+1] = aux;
            }
        }

    }
   

    for(int l = 0; l < 3; l++) {
        printf("Valor[%d] = %d\n", l, number[l]);
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}