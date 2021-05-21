#include <stdio.h>

int contar_rodrigo(int matriz[][500], int tam){
    int s_rodrigo = 0;

    for(int i = 0; i < tam; i++) {
        s_rodrigo += matriz[i][i]; 
    }

    return s_rodrigo;
}

int contar_entidade(int matriz[][500], int tam) {
    int s_entidade = 0;

    for(int i = 0; i < tam; i++) {
        for(int j = 1; j < tam; j += 2) {
            s_entidade += matriz[i][j];
        }
    }

    return s_entidade;
}

int contar_arthur(int matriz[][500], int tam) {
    int s_arthur = 0;

    for(int i = 0; i < tam; i += 2) {
        for(int j = 0; j < tam; j++) {
            s_arthur += matriz[i][j];
        }
    }

    return s_arthur;
}

void leia_matriz(int matriz[][500], int tam) {
    int valor;

    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            //printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

int main() {
    int matriz[500][500];
    int s_arthur, s_entidade, s_rodrigo;
    int tamanho;

    scanf("%d", &tamanho);

    leia_matriz(matriz, tamanho);

    s_arthur = contar_arthur(matriz, tamanho);

    //printf("Arthur: %d\n", s_arthur);

    s_entidade = contar_entidade(matriz, tamanho);

    //printf("Entidade: %d\n", s_entidade);

    s_rodrigo = contar_rodrigo(matriz, tamanho);

    //printf("Rodrigo: %d\n", s_rodrigo);

    // Decisões
    

    if (s_arthur > s_entidade && s_arthur > s_rodrigo) {
        printf("Arthur venceu!\n");
        printf("Resultado: %d\n", s_arthur);
    } else if (s_entidade > s_arthur && s_entidade > s_rodrigo) {
        printf("A entidade venceu!\n");
        printf("Resultado: %d\n", s_entidade);
    } else if (s_rodrigo > s_arthur && s_rodrigo > s_entidade) {
        printf("O intrometido venceu!\n");
        printf("Resultado: %d\n", s_rodrigo);
    } else if (s_arthur == s_rodrigo && s_arthur == s_entidade && s_entidade == s_rodrigo) {
        printf("Empate!\n");
        printf("Resultado: %d\n", s_rodrigo);
    } else if (s_arthur == s_entidade && s_arthur > s_rodrigo) {
        printf("Empate!\n");
        printf("Resultado: %d\n", s_arthur);
    } else if (s_arthur == s_rodrigo && s_arthur > s_entidade) {
        printf("Empate!\n");
        printf("Resultado: %d\n", s_arthur);
    } else if (s_entidade == s_rodrigo && s_entidade > s_arthur) {
        printf("Empate!\n");
        printf("Resultado: %d\n", s_entidade);
    }

    return 0;
}