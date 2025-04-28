#include <stdio.h>

int main(){
    float Celsius;
    float Fahr;

    printf("TA QUENTE AI???\n");
    printf("QUANTOS GRAUS CELSIUS??????\n");
    scanf("%f", &Celsius);
    Fahr=(9*Celsius+160)/5;
    printf("TA %.1fº FAHRENHEIT!!!\n", Fahr);
}