#include <stdio.h>
int main(){
    float price; int choice;

    printf("Insira o valor da venda: ");
    scanf("%f", &price);

    printf("1-Venda a Vista\n2-Venda a Prazo 30 dias\n3-Venda a Prazo 60 dias\n4-Venda a Prazo com 90 dias\n5-Venda com cartão de débito\n6-Venda com cartão de crédito\nEscolha a opção: ");
    scanf("%d", &choice);
    
    switch (choice) {
    case 1:
        price=price-(price*0.10);
        break;
    case 2:
        price=price-(price*0.05);
        break;
    case 3:
        break;    
    case 4:
        price=price+(price*0.05);
        break;
    case 5:
        price=price-(price*0.08);
        break;
    case 6:
        price=price-(price*0.07);
        break;
    default:
        printf("Opção inválida, tente novamente.");
        break;
    }
    printf("Preço final: R$%.2f", price);
}
