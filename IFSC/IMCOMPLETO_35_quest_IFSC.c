#include <stdio.h>

int main() {
    float port,mat,conhec_geral,media;
    char nome[30];  
    
    printf("Olá, para começar, Insira seu nome\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Insira sua nota de Portugues:\n");
    scanf("%f", &port);
    printf("Insira sua nota de Matematica:\n");
    scanf("%f", &conhec_geral);
    printf("Insira sua nota em Conhec. Geral:\n");
    scanf("%f", &mat);

    return 0;
}
