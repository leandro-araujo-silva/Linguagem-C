#include <stdio.h>

int main(void) {
    
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[numeroDeAlunos] [bimestresAnuais] = {0};
    float mediasAlunos[numeroDeAlunos] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno:\n");

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
        for (int notas = 0; notas < bimestresAnuais; ++notas) {
            scanf("%f", &notasAlunos[aluno] [notas]);
            media += notasAlunos[aluno][notas];
        }

        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %d:\n", aluno + 2);
    }

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
        printf("A media do aluno %d e %.2f\n", aluno + 1, mediasAlunos[aluno]);
    }

    return 0;
}


/* Lógica do programa

Matriz	bimestre[0]	bimestre[1]	bimestre[2]	bimestre[3]
aluno[0]				
aluno[1]				
aluno[2]				
aluno[3]				
				
Vetor	aluno[0]	aluno[1]	aluno[2]	aluno[3]
Media	

*/