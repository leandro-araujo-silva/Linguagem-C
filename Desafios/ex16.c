#include <stdio.h>

int main() {
    int livros, alunos;

    scanf("%d%d", &livros, &alunos);

    if ((alunos / livros) <= 8) {
        printf("A\n");
    } else if ((alunos / livros) >= 9 && (alunos / livros) <= 12) {
        printf("B\n");
    } else if ((alunos / livros) >= 13 && (alunos / livros) <= 18) {
        printf("C\n");
    } else if ((alunos / livros) > 18) {
        printf("D\n");
    }

    return 0;
}