#include <stdio.h>

int tamanhoCiclo(int nInicial, int tamanho){
    if(nInicial == 1 && tamanho == 1) return 1;
    if(nInicial == 1){
        //printf("%d\n", tamanho);
        return tamanho;
    } 
    
    if(nInicial % 2 == 0){
        nInicial = nInicial/2;
    } else{
        nInicial = (nInicial*3)+1;
    }
    
    tamanhoCiclo(nInicial, tamanho+1);
}

int maiorCiclo(int numeroMenor, int numeroMaior, int contador, int cicloMaior){
    if(contador > numeroMaior){
        //printf("%d %d %d\n", numeroMenor, numeroMaior, cicloMaior);
        return cicloMaior;
    } 
    
    int tamanhoAtual = tamanhoCiclo(contador, 1);
    if(tamanhoAtual > cicloMaior){
        cicloMaior = tamanhoAtual;
    }
    
    //printf("%d %d %d\n", numeroMenor, numeroMaior, contador);
    //Chamar a fun��o que mede o tamanho do ciclo dentre o intervalo de n1 e n2
    if(contador<=numeroMaior) maiorCiclo(numeroMenor, numeroMaior, contador+1, cicloMaior);
}

void escanear(){
    int numero1, numero2, maior;
    if(scanf("%d %d", &numero1, &numero2) != EOF){
        //printf("%d %d\n", numero1, numero2);
        if(numero1 > numero2){
            maior = maiorCiclo(numero2, numero1, numero2, 0);
        } else{
            maior = maiorCiclo(numero1, numero2, numero1, 0);
        }
        
        printf("%d %d %d\n", numero1, numero2, maior);
        escanear();
    }
    return;
}

int main() {
    escanear();
    return 0;
}