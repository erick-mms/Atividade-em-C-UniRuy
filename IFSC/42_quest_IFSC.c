#include <stdio.h>
#include <string.h>

int main(){
    char artigo[15];
    float price,desconto,price_desconto;

    printf("Qual o nome do artigo comprado?:\n");
    fgets(artigo, sizeof(artigo), stdin);
    printf("Qual o preço do artigo?:\n");
    scanf("%f", &price);
    printf("Quanto de desconto? (ex: 5) :\n");
    scanf("%f", &desconto);

    printf("Voce comprou: %s", artigo);
    printf("De R$%.1f, com %.1f porcento de desconto, sai por R$%.1f", price,desconto,(price_desconto=price-(price*desconto/100)));
}
