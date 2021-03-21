#include <stdio.h>

int main() {
    float l1, l2, l3;

    scanf("%f%f%f", &l1, &l2, &l3);

    if (l1 != l2 && l2 != l3 && l1 != l3) {
        printf("escaleno\n");
    } else if (l1 == l2 && l2 != l3 || l1 == l3 && l1!= l2 || l2 == l3 && l1 != l2) {
        printf("isosceles\n");
    } else if (l1 == l2 && l2 == l3) {
        printf("equilatero\n");
    }

    return 0;
}