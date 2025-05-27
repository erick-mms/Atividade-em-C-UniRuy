#include <stdio.h>

int main() {
    float nota1,nota2,nota3,maior,media;
    int codigo,peso1=3,peso2=3,peso3=3;

    // Leitura dos dados
    printf("Digite o código do aluno: ");
    scanf("%d", &codigo);
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Identificar a maior nota e atribuir peso 4 a ela
    if (nota1 >= nota2 && nota1 >= nota3) {
        peso1 = 4;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        peso2 = 4;
    } else {
        peso3 = 4;
    }
    // Cálculo da média ponderada
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    // Exibição dos resultados
    printf("\nCódigo do aluno: %d\n", codigo);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média ponderada: %.2f\n", media);
    if (media >= 5.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }
}
