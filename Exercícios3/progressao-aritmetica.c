#include <stdio.h>

int main() {
    int num, razao, elem;
    int vetor[10000];

    printf("Digite um numero inicial: ");
    scanf("%d", &num);

    printf("Digite o total de elementos: ");
    scanf("%d", &elem);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    vetor[0] = num;

    for(int i = 1; i < elem; i++) {
        vetor[i] = razao + vetor[i-1]; 
    }

    printf("\nProgressao aritmetica: ");

    for(int j = 0; j < elem; j++) {
        printf("%d ", vetor[j]);
    }

    printf("\n");

    return 0;
}