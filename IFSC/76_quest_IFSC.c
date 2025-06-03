#include <stdio.h>
int main() {
    int data, dia, mes;
    printf("Insira uma data (DDMMAAAA): ");
    scanf("%d", &data);

    dia = data / 1000000;
    mes = (data / 10000) % 100;

    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia < 20))
        printf("Verão\n");
    else if ((mes == 3 && dia >= 20) || mes == 4 || mes == 5 || (mes == 6 && dia < 21))
        printf("Outono\n");
    else if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 23))
        printf("Inverno\n");
    else
        printf("Primavera\n");
}
