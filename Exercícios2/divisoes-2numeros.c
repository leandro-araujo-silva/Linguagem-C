#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d%d", &n1, &n2);

    if (n2 == 0) {
        printf("Divisao por 0 nao permitido!\n");
    } else if (n1 % n2 == 0) {
        printf("%d e divisivel por %d.\n", n1, n2);
    } else {
        printf("%d nao e divisivel por %d.\n", n1, n2);
    }

    return 0;
}