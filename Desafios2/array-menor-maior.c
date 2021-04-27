#include <stdio.h>
#include <stdlib.h>

int main() {
    int number[6];
    int menor = number[1], maior = number[0];

    for(int i = 0; i < 6; i++) {
        scanf("%d", &number[i]);
    }

    for (int j = 0; j < 6; j++) {

        if (number[j] < menor) {
            menor = number[j];
        }
        
        if (number[j] > maior ) {
            maior = number[j];
        }
        
    }

    printf("%d\n", menor);
    printf("%d\n", maior);

    return 0;
}