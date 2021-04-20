#include <stdio.h>

float calcularAreaRetang(float x, float y) {

    float area;

    area = x * y;

    return area;
}

int main(void) {
    float area = calcularAreaRetang(10.0, 20.0);

    printf("A area equivale a %.2f\n", area);

    return 0;
}