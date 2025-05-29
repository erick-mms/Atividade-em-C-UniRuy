#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], categ;
    float salarioAtual; // Variável para o salário inicial
    float salarioReajustado; // Variável para o salário reajustado
    
    //leitura dos dados
    printf("Qual seu nome?\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' lido pelo fgets
   
    printf("Qual sua categoria de trabalho?\n");
    scanf(" %c", &categ); // O espaço antes de %c é importante para ignorar quebras de linha anteriores
   
    printf("Qual seu salário?\n");
    scanf("%f", &salarioAtual);
    
    switch(categ){
        case 'A': case 'C': case 'F': case 'H':
            salarioReajustado = salarioAtual * 1.10; // Adicionando 10%
            break;
        case 'B': case 'D': case 'E': case 'I': case 'J': case 'T':
            salarioReajustado = salarioAtual * 1.15; // Adicionando 15%
            break;
        case 'K': case 'R':
            salarioReajustado = salarioAtual * 1.25; // Adicionando 25%
            break;
        case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'S':
            salarioReajustado = salarioAtual * 1.35; // Adicionando 35%
            break;
        case 'U': case 'V': case 'X': case 'W': case 'Z':
            salarioReajustado = salarioAtual * 1.50; // Adicionando 50%
            break;
        default:
            printf("Categoria Inválida, tente novamente.\n");
            return 1; // Encerra o programa com um código de erro
    }
    
    printf("\nNome: %s\nCategoria: %c\nSalario REAJUSTADO: %.2f\n", nome, categ, salarioReajustado);
}
