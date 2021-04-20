#include <stdio.h>

int main() {
    int i;
    int p, q, r, e;
    char mensagem_encriptar;
    char chave_publica;

    printf("Bem vindo! Escolha uma das 3 opcoes:\n1 - Gerar chave publica,\n2 - Encriptar,\n3 - Desencriptar.\n");
    scanf("%d", &i);

    switch (i) {
        case 1:
            printf("Digite um par de numeros primos:\n");
            scanf("%d %d", &p, &q);
            break;
        case 2:
            printf("Digite a mesagem de texto a encriptar:\n");
            scanf("%c", &mensagem_encriptar);

            printf("Digite a chave pública recebida previamente:\n");
            scanf("%c", &chave_publica);
            break;
        case 3:
            printf("Digite 'p', 'q', e 'e':\n");
            scanf("%d %d %d", &p, &q, &e);
            break;
        default:
            printf("Opcao invalida!\n");
            break;

    }

    return 0;
}