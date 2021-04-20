#include <stdio.h>

int main() {
    int n1, n2, n3, result = 0;

    scanf("%d%d%d", &n1, &n2, &n3);

    for(n1; n2 <= n3; n2++) {

        if (n2 % n1 == 0) {
            printf("%d\n", n2);
            result += 1; 
        }
    }

    if (result == 0) {
        printf("INEXISTENTE\n");
    }

    return 0;
}