#include <stdio.h>

int main(){
    int dias,meses=0,ano=0;
    printf("Ha quantos dias estamos sem acidentes?\n");
    scanf("%d", &dias);
    meses=dias/30;
    ano=meses/12;
    
    printf("passou-se %d ano(s), %d mes(es) e %d dia(s) sem acidentes\n", ano, meses); 
    
}
