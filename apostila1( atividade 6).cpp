#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; ++i) {
        
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && 
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String sem vogais: %s", str);
    return 0;
}