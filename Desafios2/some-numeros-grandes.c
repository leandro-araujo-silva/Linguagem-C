#include <stdio.h>
#include <string.h>

int proximaCasa = 0;
int tamanhoSoma = 0;

void ultimaCasa(char menor[], char maior[], int soma[], int contador) {
    soma[contador] = proximaCasa;
    tamanhoSoma += 1;
}

void somar(char menor[], char maior[], int soma[], int tamanhoMenor, int tamanhoMaior, int contador) {
    int n1 = 0;
    if(contador < strlen(menor)) {
        n1 = (int)menor[tamanhoMenor]-48;
        int n2 = (int)maior[tamanhoMaior]-48;
        tamanhoSoma += 1;

        if(proximaCasa > 0) {
            n2 += proximaCasa;
            proximaCasa = 0;
        }

        if (n1 + n2 >= 10) {
            soma[contador] = (n1+ n2)%10;
            proximaCasa = (n1+n2)/10;
        } else {
            soma[contador] = (n1 + n2);
        }

        if(contador < strlen(menor)-1) {
            somar(menor, maior, soma, tamanhoMenor-1, tamanhoMaior-1, contador+1);
        } else if(strlen(menor)-1 == strlen(maior)-1) {
            if(proximaCasa > 0) {
                ultimaCasa(menor, maior, soma, contador+1);
            } else if (contador < strlen(maior)-1) {
                somar(menor, maior, soma, 0, tamanhoMaior-1, contador+1);
            } else {
                if(proximaCasa>0) {
                    ultimaCasa(menor, maior, soma, contador+1);
                }
            }
        }
    }
}

void imprimir(int array[], int contador) {
    printf("%d", array[contador]);
    if(contador > 0) {
        imprimir(array, contador-1);
    }
}

int main() {
    char n1[1500];
    char n2[1500];
    int arraySoma[2000];

    scanf("%s", n1);
    scanf("%s", n2);

    if(strlen(n1) == strlen(n2)) {
        somar(n2, n1, arraySoma, strlen(n2)-1, strlen(n1)-1, 0); 
    } else if (strlen(n1) > strlen(n2)) {
        somar(n2, n1, arraySoma, strlen(n2)-1, strlen(n1)-1, 0);
    } else {
        somar(n2, n1, arraySoma, strlen(n2)-1, strlen(n1)-1, 0);
    }

    imprimir(arraySoma, tamanhoSoma-1);

    return 0;
}