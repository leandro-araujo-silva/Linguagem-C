#include <stdio.h>

int main() {
    int number[10], escolhido, quantidade = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &number[i]);
    }

    scanf("%d", &escolhido);

    for(int j = 0; j < 10; j++){
        if(number[j] == escolhido) {
            quantidade += 1;
        }
    }

    printf("%d\n", quantidade);

    return 0; 
}