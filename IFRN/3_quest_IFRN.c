#include <stdio.h>

int main(){
    float pao=0.12;
    float broa=1.50;
    float totalvendas;
    float porcentconta;
    int quantpao;
    int quantbroa;

    printf("quantos pães vendeu-se\n");
    scanf("%d", &quantpao);
    printf("e quantas broas vendeu-se\n");
    scanf("%d", &quantbroa);

    totalvendas=(pao*quantpao)+(broa*quantbroa);
    porcentconta=(0.10*totalvendas);
    printf("foi vendido R$%.2f no dia\n", totalvendas);
    printf("tu deve guardar R$%.2f na poupanca\n", porcentconta);
}