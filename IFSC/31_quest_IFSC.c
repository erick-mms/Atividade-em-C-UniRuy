#include <stdio.h>
int main(){
    int A,B;
    printf("Insira o valor de A e B (ex: 1 2):\n");
    scanf("%d %d", &A, &B);
    if (A>B)
    {
        printf("o maior valor e A, %d", A);
    }
    else
    {
        printf("o maior valor e B, %d", B);
    }
}
