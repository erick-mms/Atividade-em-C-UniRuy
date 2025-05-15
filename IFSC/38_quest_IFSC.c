#include <stdio.h>
int main(){
    int A,B,C;
    printf("informe A, B e C (ex:1 2 3):\n");
    scanf("%d %d %d", &A,&B,&C);

    if (A+B < C)
    {
        printf("A+B é menor que C.");
    }
    else if (A+B > C)
    {
        printf("A+B é maior que C.");
    }
    else if (A+B == C)
    {
        printf("A+B é igual a C.");
    }
    
}
