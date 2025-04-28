#include <stdio.h>

int main() {
    int kg=12;
    float peso=0;
    float pricepeso;

    printf("-Restaurante Bem-Bao-\n");
    printf("quantos KG foram pesados?\n");
    scanf("%f", &peso);
    pricepeso=peso*kg;
    printf("O total foi R$%.2f", pricepeso);
}