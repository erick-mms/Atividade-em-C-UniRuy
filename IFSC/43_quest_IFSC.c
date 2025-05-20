#include <stdio.h>
#include <string.h>
int main(){
    char nome[30], categ, C;
    float salary[2]; 
    
    //leitura dos dados
    printf("Qual seu nome?\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
   
    printf("Qual sua categoria de trabalho?\n");
    scanf(" %c", &categ);
   
    printf("Qual seu salário?\n");
    scanf("%f", &salary[1]);
    
    switch(categ){
        case 'A': case 'C': case 'F': case 'H':
            salary[2]=salary[1]+(salary[1]*0.10);
            break;
        case 'B': case 'D': case 'E': case 'I': case 'J': case 'T':
            salary[2]=salary[1]+(salary[1]*0.15);
            break;
        case 'K': case 'R':
            salary[2]=salary[1]+(salary[1]*0.25);
            break;
        case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'S':
            salary[2]=salary[1]+(salary[1]*0.35);
            break;
        case 'U': case 'V': case 'X': case 'W': case 'Z':
            salary[2]=salary[1]+(salary[1]*0.50);
            break;
        default:
            printf("Categoria Inválida, tente novamente.\n");
            break;
    }
    
    printf("\nNome: %s\nCategoria: %c\nSalario REAJUSTADO: %.2f", nome, categ, salary[2]);
}
