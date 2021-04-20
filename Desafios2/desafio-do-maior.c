#include <stdio.h>

int main() {
    int valor[100], maior=0;

    for (int i = 0; i < 100; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);

        if (valor[i] == 0) {
            printf("%d\n", maior);

            return 0;
        }
        else if (valor[i] > maior) {
            maior = valor[i];
        }
    }

    printf("%d\n", maior);

    return 0;
}