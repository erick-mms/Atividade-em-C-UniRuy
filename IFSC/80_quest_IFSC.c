#include <stdio.h>
int main(){
    int weekday;
    
    printf("Insira um numero de um dia da semana (1 a 7): ");
    scanf("%d", &weekday);

    switch (weekday) {
    case 1:
        printf("Domingo.");
        break;
    case 2:
        printf("Segunda.");
        break;
    case 3:
        printf("Terça.");
        break;
    case 4:
        printf("Quarta.");
        break;
    case 5:
        printf("Quinta.");
        break;
    case 6:
        printf("Sexta.");
        break;
    case 7:
        printf("Sábado.");
        break;
    default:
        printf("Dia inválido, tente novamente.");
        return 1;
    }
}
