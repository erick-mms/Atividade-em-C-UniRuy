#include <stdio.h>
#include <string.h>

int main() {
    float port,mat,conhec_geral;
    char nome[30];  
    
    printf("Olá, para começar, Insira seu nome\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Insira sua nota de Portugues:\n");
    scanf("%f", &port);
    printf("Insira sua nota de Matematica:\n");
    scanf("%f", &mat);
    printf("Insira sua nota em Conhec. Geral:\n");
    scanf("%f", &conhec_geral);

    nome[strcspn(nome, "\n")] = '\0';
    printf("%s, Voce teve a média de %.1f como nota\n", nome, ((port+mat+conhec_geral)/3) );
    printf("tirando as seguintes notas:\n Portugues: %.1f \n Matematica: %.1f \n Conhecimentos Gerais: %.1f\n", port, mat, conhec_geral);
}
