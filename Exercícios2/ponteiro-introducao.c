#include <stdio.h>

int main() {
    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    printf("%d\n", *ponteiro);

    //getchar();

    return 0;
}