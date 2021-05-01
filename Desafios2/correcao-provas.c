#include <stdio.h>
#include <stdlib.h>

double notas[100];

double nota(char gabarito[], char p[], int index, double n) {
    if(index == 10) {
        return n;
    } else {
        if(p[index] == gabarito[index]) {
            n++;
        }

        nota(gabarito, p, index + 1, n);
    }
}

int input(char gabarito[], int index) {
    int id;
    scanf("%d", &id);

    if(id == 9999) {
        return index;
    } else {
        char prova[10];
        scanf("%s", prova);

        notas[index] = nota(gabarito, prova, 0, 0.0);

        index++;

        return input(gabarito, index);
    }
}

void output(int index, int alunos) {
    if(index < alunos) {
        printf("%d %.1lf\n", index + 1, notas[index]);

        output(index + 1, alunos);
    }
}

double aprovacao(int index, int aprovados, int alunos) {
    if(index == alunos) {
        return ((double)aprovados / (double)alunos) * 100;
    } else {
        if(notas[index] >= 6.0) {
            aprovados++;
        }

        aprovacao(index + 1, aprovados, alunos);
    }
}

int repete(double nota, int index, int counter, int alunos) {
    if(index == alunos) {
        return counter;
    } else {
        if(nota == notas[index]) {
            counter++;
        }

        repete(nota, index + 1, counter, alunos);
    }
}

double recorrente(int index, double nota, int temp, int alunos) {
    if(index == alunos) {
        return nota;
    } else {
        if(repete(notas[index], 0, 0, alunos) > temp) {
            temp =repete(notas[index], 0, 0, alunos);

            nota = notas[index];
        }

        recorrente(index + 1, nota, temp, alunos);
    }
}

int main() {
    char gabarito[10];
    scanf("%s", gabarito);

    int alunos = 0;
    alunos = input(gabarito, 0);

    output(0, alunos);
    printf("%.1lf%%\n", aprovacao(0, 0, alunos));
    printf("%.1lf\n", recorrente(0, 0.0, 0, alunos));

    return 0;
}