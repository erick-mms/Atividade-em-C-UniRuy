#include <stdio.h>

int main(){
    float a=0, r=0, vol=0;

    printf("Qual o raio da lata em cm?\n");
    scanf("%f", &r);
    printf("e qual a altura em cm?\n");
    scanf("%f", &a);
    vol=(3.14159*(r*r)*a);
    printf("tua lata tem %.2fcm³ de volume\n", vol);
}