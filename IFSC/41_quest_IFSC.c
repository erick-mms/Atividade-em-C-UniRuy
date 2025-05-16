#include <stdio.h>

int main() {
    float salario_Min, valor_Tot_Vendas, salario_Tot;
    int carros;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salario_Min);

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carros);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valor_Tot_Vendas);

    // calculo do salario total
    salario_Tot = (2 * salario_Min) + (carros * 50) + (0.05 * valor_Tot_Vendas);
    
    printf("\n--- Resultado ---\n");
    printf("Salario total do vendedor: R$ %.2f\n", salario_Tot);
}
