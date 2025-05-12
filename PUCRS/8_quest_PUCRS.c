#include <stdio.h>

int main(){
    float media;
    int numero;
    int past_num=0;
    int quant_numero=0;


    do
    {
        printf("escreva teus numero (PARES)\n");
        scanf("%d", &numero);
        if (numero < 1)
        {
            break;
        }
        if (numero % 2 == 0)
        {
            past_num=numero+past_num;
            quant_numero++;
        }
        else
        {
            printf("EU FALEI PARES, estupido.");
        }
    } while (numero>0);
    
    media=past_num/quant_numero;
    printf("a media e: %.2f", media);
}