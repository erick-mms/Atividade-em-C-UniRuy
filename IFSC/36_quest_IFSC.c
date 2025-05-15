#include <stdio.h>

int main() {
char nome[3][50];
float vendas[3], comissao[3], total = 0;

for (int i = 0; i < 3; i++) {
    printf("Nome do corretor %d: ", i + 1);
    scanf(" %[^\n]", nome[i]);
    printf("Valor da venda: ");
    scanf("%f", &vendas[i]);

    if (vendas[i] > 50000)
        comissao[i] = vendas[i] * 0.12;
    else if (vendas[i] >= 30000)
        comissao[i] = vendas[i] * 0.095;
    else
        comissao[i] = vendas[i] * 0.07;

    total += vendas[i];
}

printf("\nRelatório de Vendas:\n");
for (int i = 0; i < 3; i++) {
    printf("Corretor: %s\n", nome[i]);
    printf("Venda: R$ %.2f\n", vendas[i]);
    printf("Comissão: R$ %.2f\n\n", comissao[i]);
}

printf("Total de vendas da empresa: R$ %.2f\n", total);
}
