#include <stdio.h>

int main(){
    int dias,meses=0,ano=0;
    printf("Ha quantos dias estamos sem acidentes?\n");
    scanf("%d", &dias);
    ano=dias/360;
    dias=dias%360;
    meses=dias/30;
    dias=dias%30;
    printf("passou-se %d ano(s), %d mes(es) e %d dia(s) sem acidentes\n", ano, meses, dias); 
}
