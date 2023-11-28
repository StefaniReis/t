#include <iostream>
#include <cctype>

int main () {
	const int tamanho_maximo =100;
	char cadeia [tamanho_maximo];
	
	std:: cout <<"Digite uma cadeia de caracteres:";
	std:: cin.getline(cadeia, tamanho_maximo);
	
	for (int i =0; cadeia[i] !='\0'; ++i) {
		cadeia[i] =toupper(cadeia[i]);
	}
	std:: cout << "cadeia em letras maiculas:"<< cadeia <<std:: endl;
	return 0;
	
}
