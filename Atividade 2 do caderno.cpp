#include <stdio.h>
#include <string.h>

int main() {
	char nome[60];
	printf("Digite seu nome: ");
	
	
	fgets(nome, 60, stdin);
	
	nome[strcspn(nome, "\n")] = 0;
	if(strlen(nome) < 4) {
		printf("Seu nome tem menos de 4 letras.\n");
	} else {
		printf(" As 4 primeiras letras do seu nome sao: %.4s\n", nome);
	}
	return 0;
}