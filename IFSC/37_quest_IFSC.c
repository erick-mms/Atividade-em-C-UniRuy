#include <stdio.h>

int main() {
    int anos,meses,dias,tot_dias;
    
    printf("quantos anos, meses e dias voce tem?\n");
    scanf("%d %d %d", &anos, &meses, &dias);
   
    tot_dias=(anos*12*30)+(meses*30)+dias;
    printf("voce tem %d dias de vida.", tot_dias);
}
