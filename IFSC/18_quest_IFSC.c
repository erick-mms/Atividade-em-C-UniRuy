#include <stdio.h>

int main(){
    float comp, alt, larg, vol=0;
    printf("diga a Altura\n");
    scanf("%f", &alt);
    printf("diga a Largura\n");
    scanf("%f", &larg);
    printf("diga o Comprimento\n");
    scanf("%f", &comp);
    vol=comp*larg*alt;
    printf("o volume da caixa e: %.2fm³\n", vol);
}
