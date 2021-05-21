#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

// Um editor de texto muito simples. 

int main() {
    int t, i, j;

    printf("Digite uma linha vazia para sair.\n");

    for(t=0; t<MAX; t++) {
        printf("%d: ", t);
        gets(text[t]);
    }

    return 0;
}