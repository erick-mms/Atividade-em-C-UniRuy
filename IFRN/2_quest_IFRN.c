#include <stdio.h>
int main(){
    int horsepaw=4;
    int numhorse;
    int quantpaw;
    printf("Quantos Cavalos se tem?");
    scanf("%d", &numhorse);
    quantpaw=(numhorse*horsepaw);
    printf("São necessários %d ferraduras para equipar todos os cabalos", quantpaw);
}