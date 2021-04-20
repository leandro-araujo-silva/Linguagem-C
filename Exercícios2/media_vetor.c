#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;
    int vetor[4] = {};
    double media;

    printf("Insira 4 notas: \n");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;
    vetor[3] = n4;

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("Os numeros sao ");

    for (int i = 0; i < 4; i++) {
         printf("%d ", vetor[i]);
    }

    printf(" e a sua media e %.2lf\n", media);

    return 0;

}