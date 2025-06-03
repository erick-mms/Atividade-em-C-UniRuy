#include <stdio.h>
int main() {
    float valor, soma = 0;
    int total = 0, pos = 0, neg = 0;

    printf("Digite os valores (0 encerra o programa):\n");
    while (scanf("%f", &valor) && valor != 0) {
        soma += valor;
        total++;
        if (valor > 0) pos++;
        else neg++;
    }

    if (total)
        printf("\nTotal: %d\nMédia: %.2f\nPositivos: %d (%.2f%%)\nNegativos: %d (%.2f%%)\n",
               total, soma / total, pos, pos * 100.0 / total, neg, neg * 100.0 / total);
    else
        printf("Nenhum valor inserido.\n");
}
