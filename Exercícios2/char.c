#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    char c;

    scanf("%c", &c);

    c = getchar();

    if (c=='LETRA') {
        printf("S\n");
    }

    return 0;
}