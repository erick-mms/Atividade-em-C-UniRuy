#include <stdio.h>

int main(){
    int numeros[3], temp;

    printf("Digite os 3 numeros INTEIROS:\n");
    for (int i = 0; i < 3; i++){
        printf("Numero %d: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    //ordenação dos numeros usando bubble sort
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - 1 - i; j++) {
            if (numeros[j] < numeros[j + 1]) {
                // troca os valores
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("\nNumeros em ordem Decrescente:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", numeros[i]);
    }
}
