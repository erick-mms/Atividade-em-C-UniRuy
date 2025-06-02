#include <stdio.h>
int main() {
    float salario, aumento;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    if (salario >= 3000.00)        aumento = 0.05;
    else if (salario >= 2000.00)   aumento = 0.07;
    else if (salario >= 1750.00)   aumento = 0.10;
    else if (salario >= 1500.00)   aumento = 0.12;
    else                           aumento = 0.15;

    printf("Aumento: %.0f%%\nNovo salário: R$ %.2f\n", aumento * 100, salario * (1 + aumento));
}

