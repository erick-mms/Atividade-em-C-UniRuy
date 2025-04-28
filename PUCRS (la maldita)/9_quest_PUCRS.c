#include <stdio.h>
int main(){
    int valor;
    int big_valor=0;
    int smol_valor=0;

    for (int i = 0; i < 50; i++)
    {
        printf("digite um numero\n");
        scanf("%d", &valor);
        if (valor > big_valor)
        {
            big_valor=valor;
        }
        if (valor < smol_valor)
        {
            smol_valor=valor;
        }
        
    }
    
    printf("o MAIOR valor e %d\n", big_valor);
    printf("o MENOR valor e %d", smol_valor);
}