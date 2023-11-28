#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
	char nome[50];
	
	
	int sexo,idade;
	
printf("Informe seu nome: ");
gets(nome);
	printf("Informe seu sexo: ");
	scanf("%c",&sexo);
printf("Informe sua idade:");
scanf("%d",&idade);

	if (sexo == 'f' || sexo == 'F'&idade < 25)

		printf("\n  Voce %s foi  ACEITA.\n\n", nome);

	else

		printf("\nNAO ACEITA.\n\n");

	system("PAUSE");
}


