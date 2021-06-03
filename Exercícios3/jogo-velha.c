#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

const int vLin[3] = {6, 8, 10};
const int vCol[3] = {11, 13, 15};

void linhaCol(int lin, int col);
void box(int lin1, int col1, int lin2, int col2);
void redesenha(char v[3][3]);
//bool continua(void);
char ganhou(char v[3][3]);
void jogaComputador(char v[3][3]);
void jogaUsuario(char v[3][3]);

int main() {
    return 0;
}

void linhaCol(int lin, int col) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) (col-1,lin-1));
}

