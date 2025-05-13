#include <stdio.h>

int main() {
    float salario;

    printf("Qual seu salario?\n");
    scanf("%f", &salario);
    
    printf("Seu salario inicial é de: R$%.2f\n", salario);
    salario=salario+(salario*0.15); //calcula o aumento e joga na mesma variavel
    printf("Após o aumento de 15 por cento, foi para R$%.2f\n", salario);
    salario=salario-(salario*0.08); //pega o valor depois do aumento e diminuo do imposto
    printf("E após os impostos,o valor final foi para R$%.2f\n", salario); 
    // os tres printf mostram os valores, usando uma só variável calculada a cada etapa
}
