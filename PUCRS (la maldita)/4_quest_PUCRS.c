#include <stdio.h>
int main(){
    float chico_altura = 1.50;
    float ze_altura = 1.10;
    int contador_ano = 0;

    do
    {
        chico_altura = chico_altura + 0.02;
        ze_altura = ze_altura + 0.03;
        
        
        contador_ano++;
        printf("%.2f %.2f \n", chico_altura, ze_altura);
    } while (ze_altura < chico_altura);
    
    printf("Foram necessários %d anos para Ze ser maior que Chico.", contador_ano);
    
}