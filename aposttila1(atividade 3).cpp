#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[200];

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    if(tolower(nome[0]) == 'a') {
        printf(" O nome comeca com a letra 'a'.\n  O nome escrito foi : %s", nome);
    } else {
        printf("O nome nao comeca com a letra  'a'.\n O nome escrito foi :%s",nome);
    }

    return 0;
}