#include <stdio.h>
int main(){
int valores[20];

for (int i = 0; i < 20; i++) {
    printf("Digite o %dº valor de n: ", i + 1);
    scanf("%d", &valores[i]);
}
for (int i = 0; i < 20; i++) {
    int n = valores[i];
    printf("\nTabuada de 1 até %d para o número %d:\n", n, n);
    for (int j = 1; j <= n; j++) {
        printf("%d x %d = %d\n", j, n, j * n);
    }
}
}

