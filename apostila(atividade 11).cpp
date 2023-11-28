#include <iostream>
 
int main (){

    const int tamanho_maximo = 100;
    char vetor[tamanho_maximo];
    std:: cout << "digite uma vetor de caracteres ( incluindo espacos em branco):";
    std:: cin.getline( vetor, tamanho_maximo);
    
    
    int i = 0, j =0;
    while (vetor[i] != '\0'){
    	if (vetor[i] != ' '){
    		vetor[j++] = vetor[i];
		}
		i++;
	}
    vetor[j] = '\0';
    std:: cout << "vetor resultante :"<< vetor<< std:: endl;
    return 0;
    }