#include <stdio.h>
#include <stdlib.h>

int main() {
    char empresas[4][100];
    char busca[100];
    int encontrou = 0;

    printf("Digite os nomes de 4 empresas de tecnologia: \n");
    for(int i = 0; i < 4; i++) {
        gets(empresas[i]);
    }

    printf("=== EMPRESAS CADASTRADAS ===\n");
    for(int i = 0; i < 4; i++) {
        printf("%s \n", empresas[i]);
    }

    printf("\nDigite o nome de uma empresa para busca: (OBS: Escreva da mesma forma que se encontra no cadastro) \n");
    gets(busca);
    for(int i = 0; i < 4; i++) {
        if(strcmp(empresas[i], busca) == 0) {
            printf("Encontrou: %s \n", empresas[i]);
            encontrou = 1;
        }
    }

    if(!encontrou) {
        printf("Empresa nao localizada na matriz!\n");
    }

    return 0;
}