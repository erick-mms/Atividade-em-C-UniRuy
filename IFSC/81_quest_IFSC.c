#include <stdio.h>
int main(){
    char letra;
    
    printf("Insira uma letra do alfabeto (em maiúsculo): ");
    scanf(" %c", &letra);

    switch (letra) {
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("A letra inserida é uma Vogal.");
        break;
    case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        printf("A letra inserida é uma Consoante.");
        break;
    default:
        printf("Letra inválida, tente novamente.");
        return 1;
    }
}
