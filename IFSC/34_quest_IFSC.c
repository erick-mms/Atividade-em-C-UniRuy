#include <stdio.h>

int main() {
    int A,B,C;
    printf("Insira o valor A\n");
    scanf("%d", &A);
    printf("Insira o valor B\n");
    scanf("%d", &B);
    printf("Insira o valor C\n");
    scanf("%d", &C);
     // ordenando os numeros para descobrir a ordem
    if (A <= B && A <= C) {
        if (B <= C)
            printf("%d, %d, %d\n", A, B, C);
        else
            printf("%d, %d, %d\n", A, C, B);
    } else if (B <= A && B <= C) {
        if (A <= C)
            printf("%d, %d, %d\n", B, A, C);
        else
            printf("%d, %d, %d\n", B, C, A);
    } else {
        if (A <= B)
            printf("%d, %d, %d\n", C, A, B);
        else
            printf("%d, %d, %d\n", C, B, A);
    }
}
