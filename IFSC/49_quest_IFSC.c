#include <stdio.h>

int main() {
    float X, Y, Z;

    printf("Digite o valor do lado X: ");
    scanf("%f", &X);
    printf("Digite o valor do lado Y: ");
    scanf("%f", &Y);
    printf("Digite o valor do lado Z: ");
    scanf("%f", &Z);

    //verifica se é um triangulo
    if (X < Y + Z && Y < X + Z && Z < X + Y) {
        //c lassificação do triângulo
        if (X == Y && Y == Z) {
            printf("Triângulo equilátero\n");
        } else if (X == Y || Y == Z || X == Z) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Os valores fornecidos não formam um triângulo\n");
    }

    return 0;
}
