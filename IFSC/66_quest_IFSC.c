#include <stdio.h>
int main(){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Maior número: %d\n", num1);
        printf("Menor número: %d\n", num2);
    } else if (num2 > num1) {
        printf("Maior número: %d\n", num2);
        printf("Menor número: %d\n", num1);
    } else {
        printf("Os dois números são iguais: %d\n", num1);
    }
}
