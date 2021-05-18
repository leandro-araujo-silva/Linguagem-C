#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define ALPHSIZE 27
#define TXTSIZE 500

// Esa parte abaixo não foi desenvolvida pela equipe! Pedimos ajuda.

typedef struct node node;

struct node{
	char letter;
	int index;
};

node alphabet[ALPHSIZE];

void preencher_alfabeto(node vet[]);

//.................................................................

void encriptar();

bool eh_coprimo(int e, int p, int q) {
    int resp1, resp2, i=2, j=2;

    for (i=2; i<=p; i++) {
        resp1 = e%i;
        if(resp1 == 0) {
            return false;
        }
    }

    for (j=2; j<=q; j++) {
        resp2 = e%j;
        if(resp2 == 0) {
            return false;
        }
    }

    return true;
}

bool eh_primo(int n){
	int mod, i = 2;
	double raizQ = sqrt(n);

	for(i=2; i<=raizQ; i++){
		mod = n%i;
		if(mod == 0){
			return false;
		}
	}

	return true;
}

void gerar_codigo() {
    long long int p, q, e, n;
	FILE *output = fopen("chave.txt", "w");

	if (output == NULL){
		printf("ERRO NA CRIAÇÃO DO ARQUIVO!!!");
	}

	printf("Digite dois numeros primos: \n");
	scanf("%lld %lld", &p, &q);

	if(eh_primo(p) == false || eh_primo(q) == false){
		printf("Um dos numeros nao eh primo!\n");
	}else{
		printf("Digite agora o expoente: \n");
		scanf("%lld", &e);

        if(eh_coprimo(e, p-1, q-1) == false) {
            printf("O expoente nao eh coprimo com os numeros primos informados!\n");
        } else {
            n = p*q;

		    fprintf(output, "n = %lld e = %lld", n, e);

		    fclose (output);
	    }
    }
}

int main() {
    int i;
    int p, q, e;
   
    printf("Bem vindo! Escolha uma das 3 opcoes:\n1 - Gerar chave publica\n2 - Encriptar um texto\n3 - Desencriptar um texto\n");
    scanf("%d", &i);

    preencher_alfabeto(alphabet);

    switch (i) {
        case 1:
            gerar_codigo();
            break;
        case 2:
            encriptar();
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

// A funções preencher_alfabeto e a procurar alfabeto não foram desenvolvidas pela equipe! Pedimos Ajuda.

void preencher_alfabeto(node vet[]){
	int i;
	for(i=0;i<ALPHSIZE;i++){
		if(i!=26){
			alphabet[i].letter = (char)97+i;
		}else{
			alphabet[i].letter = (char)32;
		}
		
		alphabet[i].index = i;
	}
}

int procurar_alfabeto(char c){
	int i=0;

	while(i<ALPHSIZE){
		if(c == alphabet[i].letter){
			return alphabet[i].index;
		}else{
			i++;
		}
	}

	return -1;
}

//.................................................................

void encriptar() {
    int i, index;
	long long int numbtxt[TXTSIZE], encode[TXTSIZE], n, e, aux;
	char text[TXTSIZE];
	FILE *output = fopen("encriptado.txt", "w");

	if (output == NULL){
		printf("ERRO NA CRIAÇÃO DO ARQUIVO!!!");
	}

	printf("Digite o texto a ser encriptado (Max.:%d caracteres): ", TXTSIZE);
	
	scanf("%s", text);

    // Essa parte abaixo não foi desenvolvida pela equipe! Pedimos ajuda a amigos mais avançados no curso.

	for(i=0;i<strlen(text);i++){
		char aux = text[i];
		index = procurar_alfabeto(aux);

		if(index == -1){
			printf("Caractere invalido: %c\n", aux);
		}else{
			numbtxt[i] = index;
		}
	}

	printf("Favor digite a chave publica e o expoente: \n");
	scanf("%lld %lld", &n, &e);

	//Encriptar
	for(i=0;i<strlen(text);i++){
		aux = pow(numbtxt[i], e);
		encode[i] = aux%n;
		fprintf(output, "%lld", encode[i]);
		if(i!=strlen(text)-1){
			fprintf(output, " ");
		}
	}

	fclose(output);
}