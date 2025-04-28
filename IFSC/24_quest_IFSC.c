#include <stdio.h>

int main(){
    float kmh;
    printf("Diga a velocidade em Km/H\n");
    scanf("%f", &kmh);
    printf("%.2fKm/h sao %.2fm/s", kmh,+kmh/3.6);
}
