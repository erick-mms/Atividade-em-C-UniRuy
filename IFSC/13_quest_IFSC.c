#include <stdio.h>

int main(){
    float Celsius;
    float Fahr;

    printf("TA QUENTE AI???\n");
    printf("QUANTOS GRAUS FAHRENHEIT??????\n");
    scanf("%f", &Fahr);
    Celsius=(Fahr-32)*0.555;
    printf("TA %.1fº CELSIUS!!!\n", Celsius);
}