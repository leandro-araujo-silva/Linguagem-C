#include <stdio.h>

int main () {
    int num1, num2;
    int multiplo = 0;

    scanf("%d%d", &num1, &num2);

    for (int i = 49; i > 0; i--) {
        if (i % num1 == 0 && i % num2 == 0) {
            multiplo += 1; 
        }
    }

    printf("%d\n", multiplo);

    return 0;
}