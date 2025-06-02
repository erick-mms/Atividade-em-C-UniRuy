#include <stdio.h>
double fatorial(int numero) {
    double resultado = 1.0;

    for (int i = numero; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;

    printf("Digite quantos valores serão lidos: ");
    scanf("%d", &n);
    int val[n];

    for (int i = 0; i < n; i++) {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &val[i]); 
    }

    printf("\nValor\tFatorial\n");
    printf("----------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.1f\n", val[i], fatorial(val[i]));
    }
}
