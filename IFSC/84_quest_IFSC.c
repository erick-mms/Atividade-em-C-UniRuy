#include <stdio.h>
#include <string.h>
int main(){
    float saldo,valor; int num,op; char pessoa[15];
    
    printf("Insira seu nome:\n");
    fgets(pessoa, sizeof(pessoa), stdin);
    pessoa[strcspn(pessoa, "\n")] = 0;
    
    printf("Insira o numero da sua conta:\n");
    scanf("%d", &num);
   
    printf("Qual o seu saldo atual: ");
    scanf("%f", &saldo);
    
    printf("1-Deposito\n2-Retirada\nEscolha a operação bancária: ");
    scanf("%d", &op);
    
    switch (op) {
    case 1:
        printf("Qual valor será depositado: ");
        scanf("%f", &valor);
        printf("Saldo Final de (num. conta: %d) %s: R$%.2f",num,pessoa,(saldo+valor));
        break;
    case 2:
        printf("Qual valor será Retirado: ");
        scanf("%f", &valor);
        if (valor>saldo) {
            printf("Saldo Insuficiente.");
            break;
        }
        printf("Saldo final de (num. conta: %d) %s: R$%.2f",num,pessoa,(saldo-valor));
        break;
    default:
        printf("Operação inválida.");
        return 1;
    }
}
