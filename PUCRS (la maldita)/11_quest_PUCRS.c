#include <stdio.h>
int main(){
    int n, a1, r, contador=0, soma=0;

    printf("Insira o numero de termos de uma P.A\n");
    scanf("%d", &n);
    printf("Insira o primeiro termo da P.A\n");
    scanf("%d", &a1);
    printf("Insira a razao da P.A:  ");
    scanf("%d", &r); 

    while (contador < n)
    {
        printf("%d\n", a1);
        soma=soma+a1;
        a1=a1+r;
        contador++;
    }
    printf("a soma dos elementos deu %d", soma);
}