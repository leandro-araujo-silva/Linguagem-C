#include <stdio.h>

int maiorP(int valor) {
    int maiorPar = 0;

    if (valor > maiorPar && valor % 2 == 0) {
            maiorPar = valor;
    }

    return maiorPar;
}

int menorI(int valor) {
    int menorImpar;

    if (valor % 2 != 0) {
        menorImpar = valor;
    }

    return menorImpar;
}

int main(){
    int n, valor;
    int maiorPar = 0, valorP;
    int menorImpar = 0, valorI;
    int antM = 0, antMenor;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &valor);

        // par

        valorP = maiorP(valor);

        if (valorP > maiorPar) {
            maiorPar = valorP;
        }

        // impar

        valorI = menorI(valor);

        if (valorI > menorImpar) {
            menorImpar = valorI;
        }

    }

    if (maiorPar == 0) {
        printf("Sem numeros pares\n");
    } else {
        printf("Maior par: %d\n", maiorPar);
        printf("Primo anterior ao maior: %d\n", antM);
    }

    if (menorImpar == 0) {
        printf("Sem numeros impares\n");
    } else {
        printf("Menor impar: %d\n", menorImpar);
        printf("Primo anterior ao menor: %d", antMenor);
    }
    
    return 0;
}