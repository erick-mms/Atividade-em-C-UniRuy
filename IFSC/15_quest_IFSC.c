#include <stdio.h>

int main(){
    float tempo=0, speed=0, distance=0, Litros=0;

    printf("quantas horas durou a viagem?\n");
    scanf("%f", &tempo);
    printf("qual foi a velocidade media durante a viagem?\n");
    scanf("%f", &speed);
    distance=speed*tempo;
    Litros=distance/12;
    printf("viajando por %.1f horas, a %.1fkmh\n", tempo, speed);
    printf("voce percorreu %.1fkm e usou %.1f litros de gasolina\n", distance, Litros);
}