#include <stdio.h>

int main(){
    int A, B;

    printf("diga A\n");
    scanf("%d", &A);
    printf("diga B\n");
    scanf("%d", &B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("A é %d e B é %d", A, B);
}