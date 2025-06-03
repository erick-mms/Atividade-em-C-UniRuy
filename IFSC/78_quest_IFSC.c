#include <stdio.h>
int main(){
    int I; float A,B,C,maior,menor,meio;
    printf("Insira I (1,2 ou 3): ");
    scanf("%d", &I);

    printf("Agora insira A B C: ");
    scanf("%f %f %f", &A,&B,&C);

    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) { meio = B; maior = C; }
        else        { meio = C; maior = B; }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) { meio = A; maior = C; }
        else        { meio = C; maior = A; }
    } else {
        menor = C;
        if (A <= B) { meio = A; maior = B; }
        else        { meio = B; maior = A; }
    }

    switch (I) {
        case 1:
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", menor, meio, maior);
            break;
        case 2:
            printf("Ordem decrescente: %.2f, %.2f, %.2f\n", maior, meio, menor);
            break;
        case 3:
            printf("Maior valor entre os outros: %.2f, %.2f, %.2f\n", menor, maior, meio);
            break;
        default:
            printf("Opção inválida.\n");
    }
}
