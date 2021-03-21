#include <stdio.h>

int main() {
    int x, y;

    scanf("%d%d", &x, &y);

    // pergunta 1

    if (x > y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // pergunta 2

     if (x == y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // pergunta 3

     if (x < y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // pergunta 4

     if (x != y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // pergunta 5

     if (x >= y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // pergunta 6

     if (x <= y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}