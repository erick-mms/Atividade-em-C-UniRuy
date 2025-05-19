#include <stdio.h>

int main(){
    int numeros[3], menor;

    printf("Digite os 3 numeros INTEIROS:\n");
    for (int i = 0; i < 3; i++){
        printf("Numero %d: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    menor=numeros[0];
   //"percorre" o array para encontrar o menor valor
    for (int i = 1; i < 3; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nO menor valor digitado foi: %d\n", menor);
}
