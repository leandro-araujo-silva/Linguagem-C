#include <stdio.h>

int main() {
    int n1, n2 = n1, result, result2 = 0;

    scanf("%d", &n1);

    for (n1; n2 > 0; n2--) {
        if (n1 % n2 == 0) {
            result += 1;
        }
    }
    printf("%d", result);

    /*
    for(n1; n1 > 0; n1--) {

        if (n1 % 3 == 0) {
            result2 += 1; 
        }
    }
    

    if (result == 0) {
        printf("O numero nao possui divisores multiplos de 3!\n");
    } else {
        printf("%d\n", result);
    }

    */

    return 0;
}