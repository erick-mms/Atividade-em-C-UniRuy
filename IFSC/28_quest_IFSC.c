#include <stdio.h>
int main(){
    int M,N;
    
    printf("Insira um Numero de 3 algarismos: \n");
    scanf("%d", &N);
    M = (N % 10) * 100 + ((N % 100) / 10) * 10 + (N / 100); //o código separa os digitos por meio de operações de divisão e módulo
    printf("%d -> %d", N, M);
}
