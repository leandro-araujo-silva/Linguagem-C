#include <stdio.h>

int main() {
    char nomes[2][17];

    printf("Digite as strings: \n");

    for(int i = 0; i < 2; i++) {
        printf("%d string: ", i+1);
        gets(nomes[i]);
    }

    printf("Os nomes sao: \n");

    for(int j = 0; j < 2; j++) {
        printf("%s \n", nomes[j]);
    }

    return 0;
}