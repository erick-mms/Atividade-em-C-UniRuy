#include <stdio.h>
int main(){
    int cen,dez,uni,num;
    
    printf("Insira um Numero de 3 algarismos: \n");
    scanf("%d", &num);
    cen= (num % 10);  
    dez=((num % 100) / 10);
    uni= (num / 100);
    printf("CENTENA = %d \n DEZENA = %d \n UNIDADE = %d", uni,dez,cen);
}
