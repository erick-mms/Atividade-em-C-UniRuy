#include <stdio.h>
int main() {
    int codigo, quantidade;
    float precoUnitario, precoTotal;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    // determina o preço unitário com base no código
    switch (codigo) {
        case 1001:
            precoUnitario = 5.32;
            break;
        case 1324:
            precoUnitario = 6.45;
            break;
        case 6548:
            precoUnitario = 2.37;
            break;
        case 987: 
            precoUnitario = 5.32;
            break;
        case 7623:
            precoUnitario = 6.45;
            break;
        default:
            printf("Código de produto inválido!\n");
            return 1; 
    }
    // calcula o preço total
    precoTotal = precoUnitario * quantidade;

    printf("Preço total a pagar: R$ %.2f\n", precoTotal);
}
