#include <stdio.h>
#include <string.h>
int main() {
	char str1[100];
	char str2[100];
	int resultado;

	printf("Digite a primeira string: ");
	fgets(str1, sizeof(str1), stdin);

	printf("Digite a segunda string: ");
	fgets(str2, sizeof(str2), stdin);

	resultado = strcmp(str1, str2);

	if(resultado == 0) {
		printf("As strings sao iguais.\n");
	} else {
		printf("As strings sao diferentes.\n");
	}

	return 0;
}

