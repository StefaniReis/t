#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char nome[60];
	printf("Digite seu nome: ");
	fgets(nome,60, stdin);
	nome[strcspn(nome, "\n")] =0;
	printf("Seu nome tem %lu letras.\n", strlen(nome));
	
	
	return 0;
}
