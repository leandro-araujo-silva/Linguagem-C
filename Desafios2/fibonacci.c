#include <stdio.h>
#include <stdlib.h>

int fibonacci(n) {
    if ((n == 0) || (n == 1)) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int num;

    printf("Escreva um numero: ");
    scanf("%d", &num);

    printf("Fibonacci: %d\n", fibonacci(num));
}