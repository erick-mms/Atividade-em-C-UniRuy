#include <stdio.h>

int main(){
    int espec,amount; float price;

    printf("Insira o código do item:\n");
    scanf("%d", &espec);
    printf("Insira a quantidade do item:\n");
    scanf("%d", &amount);

    switch (espec)
    {
    case 100:
        price=1.10*amount;
        break;
    case 101:
        price=1.30*amount;
        break;
    case 102:
        price=1.50*amount;
        break;
    case 103:
        price=1.10*amount;
        break;
    case 104:
        price=1.30*amount;
        break;
    case 105:
        price=1*amount;
        break;
    default:
        printf("Código Inválido, tente novamente.");
        return 1;
    }
    
    printf("Foram comprados %d Itens, no valor de R$%.2f",amount,price);
}
