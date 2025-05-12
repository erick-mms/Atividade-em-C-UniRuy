#include <stdio.h>
int main(){
    int data,dia,mes,ano,data_invert;
   
    printf("Insira uma data, no formato DDMMAA (dia, mês, ano) :\n");
    scanf("%d", &data);
    
    dia=data/10000;
    mes=(data%10000)/100;
    ano=data%100;
    
    data_invert=ano*10000+mes*100+dia;
    printf("no formato AAMMDD, a data inserida é %06d", data_invert);
}
