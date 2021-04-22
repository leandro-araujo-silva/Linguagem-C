#include <stdio.h>

int Menor(int x[]) {
    int menor = 0;

    if (x < menor){
        menor = x;
    }

    return menor;
}


int main(void) {
    int number[6];
    int menor, maior;

    for(int i; i < 6; i++) {
        scanf("%d", &number[i]);

        //menor = Menor(number[i]);
        //maior = functionMaior(number[i]);
    }

    menor = Menor(number[10]);

    printf("%d\n", menor);

    return 0;
}