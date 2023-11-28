#include <stdio.h>
#include <string.h>

int main (void) {
	char str[]= "Programacao";
	int tamanho;


  tamanho = strlen ( str );
	printf("O tamanho da string: %s\nvale: %d \n ",str, tamanho);

	return 0;
}