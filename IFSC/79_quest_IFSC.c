#include <stdio.h>
int main(){
    char est_civ;
    
    printf("Insira seu Estado Civil (S, C, V, D): ");
    scanf(" %c", &est_civ);

    switch (est_civ) {
    case 'S':
        printf("Solteiro");
        break;
    case 'C':
        printf("Casado");
        break;
    case 'V':
        printf("Viúvo");
        break;
    case 'D':
        printf("Divorciado ou Desquitado");
        break;
    default:
        printf("Estado civil inválido, tente novamente.");
        return 1;
    }
}
