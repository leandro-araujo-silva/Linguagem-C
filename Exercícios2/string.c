#include <stdio.h>

int main() {
    char teste[] = {'b', 'r', 'a', 's', 'i', 'l'};

    int i;
    for(i = 0; i < 6; ++i) {
        printf("%c", teste[i]);
    }

    printf("\n");

    for(int j = 5; j >= 0; j--) {
        printf("%c", teste[j]);
    }

    printf("\n");

    return 0;
}