#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int contar_espacos( string frase) {
	int num_espacos = 0;
	for (char c: frase){
		if ( c == ' '){
			num_espacos ++;
		}
	}
	return num_espacos;

			}			
	int main(){
		string frase ;
		cout<< "digite uma frase:";
		getline(cin, frase);
		int num_espacos = contar_espacos(frase);
		cout<< "a frase digitada contem " << num_espacos <<" espaco em branco" << endl;
		return 0;
	}
