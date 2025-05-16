#include <stdio.h>
int main(){
    int picole1,picole2,picole3,tot_picole;
    float tipo1=0.5,tipo2=0.6,tipo3=0.75,tot_vendas;

    printf("Quantos picolés do tipo 1 foram vendidos?:\n");
    scanf("%d", &picole1);
    printf("Quantos picolés do tipo 2 foram vendidos?:\n");
    scanf("%d", &picole2);
    printf("Quantos picolés do tipo 3 foram vendidos?:\n");
    scanf("%d", &picole3);
    //calculo de unidades vendidas e total arrecadado
    tot_picole=picole1+picole2+picole3;
    tot_vendas=(picole1*tipo1)+(picole2*tipo2)+(picole3*tipo3);

    printf("Foram vendidos %d Picolés, arrecadando R$%.1f .", tot_picole, tot_vendas);
}
