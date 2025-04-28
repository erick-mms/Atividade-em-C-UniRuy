#include <stdio.h>

int main() {
    float base;
    float haltura;
    float area = 0;

    printf("diga a base e altura do terreno\n");
    scanf("%f", &base);
    scanf("%f", &haltura);

    area = (base * haltura);
    printf("a area do terreno é de %.2fm2\n", area);
} 
