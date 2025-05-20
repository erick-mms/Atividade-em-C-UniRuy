#include <stdio.h>

int main() {
    int a,b;
    
    printf("Insira o primeiro numero: \n");
    scanf("%d", &a);
    printf("Insira o segundo numero: \n");
    scanf("%d", &b);

  //encontra o maior numero entre os 2, por meio da comparação por "maior que" e "menor que"
    if (a>b){
        printf("O MAIOR numero é: %d", a);
    }else if(a<b){
        printf("O MAIOR numero é: %d", b);
    }else{
        printf("Os dois numeros são iguais.");
    }
}
