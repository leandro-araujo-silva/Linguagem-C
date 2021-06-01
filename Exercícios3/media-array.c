#include <stdio.h>

int main() {
    float nota[5];
    int total = 0; 
    double media;

    for(int i = 0; i < 5; i++) {
        scanf("%f", &nota[i]);
        total += nota[i];
    }

    media = total / 5.00;

    printf("Media: %.2lf\n", media);

    return 0;
}