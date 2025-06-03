#include <stdio.h>
int main() {
    float a, b, resultado;
    int option;
  
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha a operação (1 a 4): ");
    scanf("%d", &option);
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    switch (option) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0)
                printf("Resultado: %.2f\n", a / b);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}
