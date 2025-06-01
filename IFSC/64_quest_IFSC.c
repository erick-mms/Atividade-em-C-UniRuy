#include <stdio.h>
#include <string.h>

void calcular_preco_total(char codigo[], int quantidade) {
    float preco_unitario;
    int codigo_valido = 1;

    if (strcmp(codigo, "ABCD") == 0) {
        preco_unitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        preco_unitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        preco_unitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        preco_unitario = 2.50;
    } else {
        codigo_valido = 0;
    }

    if (codigo_valido) {
        float total = preco_unitario * quantidade;
        printf("Produto: %s\n", codigo);
        printf("Quantidade: %d\n", quantidade);
        printf("Preço unitário: R$ %.2f\n", preco_unitario);
        printf("Preço total: R$ %.2f\n", total);
    } else {
        printf("Código de produto inválido.\n");
    }
}
int main() {
    char codigo[10];
    int quantidade;

    printf("Digite o código do produto: ");
    scanf("%s", codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    calcular_preco_total(codigo, quantidade);
}
