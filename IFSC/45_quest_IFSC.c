#include <stdio.h>
int main(){
    int num,valor_op,op;
    float saldo;

    printf("Insira o numero da conta:\n");
    scanf("%d", &num);
    printf("Qual o saldo da conta:\n");
    scanf("%f", &saldo);
    printf("Qual o valor da operação?:\n");
    scanf("%d", &valor_op);

    printf("A operação será de Depósito ou Retirada?\n 1-Depósito\n 2-Retirada\n");
    scanf("%d", &op);

    if (op==1)
    {
        saldo=saldo+valor_op;
        printf("Seu saldo agora é de R$%.1f\n", saldo);
    }
    else if (op==2)
    {
        saldo=saldo-valor_op;
        printf("Seu saldo agora é de R$%.1f\n", saldo);
    }
    else
    {
        printf("Operação Inválida");
        return 0;
    }
    if (saldo<0)
    {
        printf("Conta estourada");
    }
}
