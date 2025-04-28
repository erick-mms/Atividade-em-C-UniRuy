#include <stdio.h>

int main(){
    int num_smol, num_med, num_big, tot_vend;
    printf("Diga a quantidade de camisas Pequenas, Medias e Grandes serao vendidas.\n");
    scanf("%d %d %d", &num_smol, &num_med, &num_big);
    tot_vend=(num_smol*10)+(num_med*12)+(num_big*15);
    printf("Foi arrecadado R$%d", tot_vend);
}
