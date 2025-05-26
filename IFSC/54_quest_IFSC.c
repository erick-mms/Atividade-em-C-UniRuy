#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, num3;

    printf("Digite o valor de Num1: ");
    scanf("%f", &num1);
    printf("Digite o valor de Num2: ");
    scanf("%f", &num2);
    printf("Digite o valor de Num3: ");
    scanf("%f", &num3);
    
    printf("Digite a opção (2, 3 ou 4): ");
    scanf("%d", &opcao);
    //verifica se a opção é valida
    if (opcao != 2 && opcao != 3 && opcao != 4) {
        printf("Opção inválida. Use apenas 2, 3 ou 4.\n");
        return 1; 
    }

    // Decisão com base na opção
    if (opcao == 2) {
        printf("Resultado: %.2f\n", num1);
    } else if (opcao == 3) {
        printf("Resultado: %.2f\n", num2);
    } else if (opcao == 4) {
        printf("Resultado: %.2f\n", num3);
    } 
}
