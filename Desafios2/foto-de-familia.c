#include <stdio.h>

void alinhando(float vetor[], int n) {
     int i, j, temporaria;

    for(i = 0; i < n; ++i) {
        for(j = i + 1; j < n; ++j) {
            if(vetor[i] > vetor[j]) {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            } 
        }
    } 
}

int main() {
    float vetor[4];
    float n1, n2, n3, n4;
    float ord1, ord2, ord3;

    // Forma correta

    for(int i = 0; i < 4; i++){
        scanf("%f", &vetor[i]);

        if(vetor[i] <= 0) { 
            i--;
        }
    }

    /* Jeito que eu fiz (O código não exclui os números negativos)

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;
    vetor[3] = n4;

    */

    alinhando(vetor, 4);

    ord1 = vetor[1];
    ord2 = vetor[2];
    ord3 = vetor[3];

    vetor[3] = ord1;
    vetor[1] = ord2;
    vetor[2] = ord3;

    for (int i = 0; i < 4; ++i) {
        printf("%.2f\n", vetor[i]);
    }

    return 0;
}