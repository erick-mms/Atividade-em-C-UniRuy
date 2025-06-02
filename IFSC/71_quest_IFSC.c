#include <stdio.h>
#include <string.h>
int main(){
    char nome[2][10]; float peso[2],altura[2];

    printf("Olá, Insira o nome da PRIMEIRA pessoa:\n");
    scanf("%s", nome[1]);
    printf("Insira sua altura: ");
    scanf("%f", &altura[1]);
    printf("Insira seu peso: ");
    scanf("%f", &peso[1]);
    
    printf("Insira o nome da SEGUNDA pessoa:\n");
    scanf("%s", nome[2]);
    printf("Insira sua altura: ");
    scanf("%f", &altura[2]);
    printf("Insira seu peso: ");
    scanf("%f", &peso[2]);

    if (altura[1]>altura[2]) {
        printf("%s é mais alto.\n", nome[1]);
    } else {
        printf("%s é mais alto.\n", nome[2]);
    }
    
    if (peso[1]>peso[2]){
        printf("%s é mais pesado.\n", nome[1]);
    }else {
        printf("%s é mais pesado.\n", nome[2]);
    }
}
