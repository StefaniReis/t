#include <stdio.h>
#include <string.h>

int main() {
    char palavra[500], caractere, nova_palavra[500];
    int i, contador = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    

    for(i = 0; i < strlen(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            nova_palavra[i] = caractere;
            contador++;
        } else {
            nova_palavra[i] = palavra[i];
        }
    }
    nova_palavra[i] = '\ 0 ';

    printf("A palavra '%s' tem %d vogais.\n", palavra, contador);
    printf("A nova palavra e: %s\n", nova_palavra);

    return 0;
}