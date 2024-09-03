#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);

    // Removendo o caractere de nova linha caso ele seja lido pela função fgets
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' ocorre %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
