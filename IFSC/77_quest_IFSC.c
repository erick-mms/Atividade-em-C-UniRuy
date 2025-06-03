#include <stdio.h>
int main(){
    int mes,ano,dia,bissexto;
    
    printf("Insira o mes: ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);

    bissexto=(ano%4==0 && ano%100!=0) || (ano%400==0);

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dia=31;
            break;
        case 4: case 6: case 9: case 11:
            dia=30;
            break;
        case 2:
            dia=bissexto ?29:28;
            break;
        default:
            printf("mês inválido, tente novamente.");
            return 1;
    }
    printf("O mes %d do ano %d tem %d dias.",mes,ano,dia);
}
