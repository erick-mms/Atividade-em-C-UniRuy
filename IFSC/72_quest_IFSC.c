#include <stdio.h>
#include <string.h>
int main() {
   int idade; char nome[15];
   
   printf("Insira o nome do Jogador:\n");
   scanf("%s", nome);
   printf("Agora insira a idade do Jogador: ");
   scanf("%d", &idade);
   
    switch(idade){
            case 5: 
            case 6: 
            case 7: 
            case 8: 
            case 9: 
            case 10:
                printf("%s, está na categoria Infantil", nome);
                break;
            case 11: 
            case 12: 
            case 13:
            case 14:
            case 15:
                printf("%s, está na categoria Juvenil", nome);
                break;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                printf("%s, está na categoria Junior", nome);
                break;
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
                printf("%s, está na categoria Profissional", nome);
                break;
            default:
                printf("Sem categoria definida para essa idade, tente novamente\n");
                break;
    }
}
