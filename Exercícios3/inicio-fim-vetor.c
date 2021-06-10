#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10];
    int n;

    printf("Digite 10 numeros\n\n");

    for(int i = 0; i < 10; i++) {
        printf("Numero[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do {
        printf("Escolha uma das 3 opcoes: \n0 - Finaliza o programa,\n1 - Vetor na ordem inicial ate final,\n2 - Vetor na ordem final ate inicial\n");
        scanf("%d", &n);

        if (n == 1) {
            for(int j = 0; j < 10; j++) {
                printf("Vetor[%d]: %d\n", j, array[j]);
            }
        } else if(n == 2) {
            for(int j = 9; j >= 0; j--) {
                printf("Vetor[%d]: %d\n", j, array[j]);
            }
        } else if (n == 0) {
            return 0;
        } else {
            printf("Opcao invalida!\n");
        }
        printf("\n");
    } while(n != 0);

    return 0;

}