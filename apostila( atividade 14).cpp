#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	char nome [100];
	int idade,NOME;
	int idade_minima = INT_MAX;
	int idade_maxima = INT_MIN;
	char nome_minimo[100];
	char nome_maximo[100];

	for (int i = 0; i < 10; i++) {

		printf("Digite a idade da pessoa %d (ou uma idade negativa para encerrar): ", i + 1);
		scanf("%d", &idade);


		if (idade < 0) {
			break;
		}

	printf("Digite o primeiro nome da pessoa %d: ", i + 1);
		scanf("%s", nome);


		if (idade < idade_minima) {
			idade_minima = idade;
			strncpy(nome_minimo, nome, NOME - 1);
			nome_minimo[NOME - 1] = '\0';
               printf("")
			if (idade > idade_maxima) {
				idade_maxima = idade;
				strncpy(nome_maximo, nome, NOME - 1);
				nome_maximo[NOME - 1] = '\0';
			}
		}
		printf("A pessoa mais jovem e %s com %d anos.\n", nome_minimo, idade_minima);
		printf("A pessoa mais velha e %s com %d anos.\n", nome_maximo, idade_maxima);

	
		return 0;
	}
}