#include <stdio.h>

int main(){
    int valor,pgto,troco;
    int nota100,nota10,nota1;
     
    printf("Qual o valor da compra?\n");
    scanf("%d", &valor);
    printf("Qual o montante pago?\n");
    scanf("%d", &pgto);
    //se o valor para pagamento, for menor que o valor total, o código não prosseguirá
    if (pgto < valor)
    {
        printf("Pagamento Insuficiente, seu pobre.");
        return 0;
    }
    troco=pgto-valor;

    //calculo das notas
    nota100=troco/100;
    troco%=100;

    nota10=troco/10;
    troco%=10;

    nota1=troco;
    //resultados
    printf("Valor da compra: R$ %d\n", valor);
    printf("Valor do troco: R$ %d\n", pgto - valor);
    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 10 : %d\n", nota10);
    printf("Notas de 1  : %d\n", nota1);
}
