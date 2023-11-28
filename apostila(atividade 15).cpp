#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    if(strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    printf("\nAs strings em ordem alfabetica sao: ");
    printf("%s", str1);
    printf("%s", str2);

    return 0;
}