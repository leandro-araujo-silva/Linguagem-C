#include <stdio.h>

int main() {
    int tempC[10];
    double tempF[10];

    printf("Digite os valores em graus Celsius: \n");

    for(int i = 0; i<3; i++) {
        scanf("%d", &tempC[i]);
    }

    for(int j = 0; j <3; j++) {
        tempF[j] = (tempC[j] * 9/5) + 32;
        printf("Temp[%d] em Graus Fahrenheit = %.1lf\n", tempC[j], tempF[j]);
    }

    return 0;
}