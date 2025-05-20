#include <stdio.h>

int main() {
    int a,b;
    
    printf("Insira o primeiro numero: \n");
    scanf("%d", &a);
    printf("Insira o segundo numero: \n");
    scanf("%d", &b);
    
  //usa a verificação de igualdade, e caso não seja, usa a 
  //verificação de "maior que" para listar em ordem decrescente.
    if (a==b){
        printf("Os dois numeros são iguais.");
    }else if(a>b){
        printf("Os numeros não são iguais: %d, %d", a,b);
    }else if(a<b){
        printf("Os numeros não são iguais: %d, %d", b,a);
    }
}
