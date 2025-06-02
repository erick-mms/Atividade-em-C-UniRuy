#include <stdio.h>
int main() {
    int dia, mes, signo;
    const char* nomes_signos[] = {
        "Aquário", "Peixes", "Áries", "Touro", "Gêmeos", "Câncer",
        "Leão", "Virgem", "Libra", "Escorpião", "Sagitário", "Capricórnio"
    };

    printf("Digite o dia do seu aniversário: ");
    scanf("%d", &dia);

    printf("Digite o mês do seu aniversário (1 a 12): ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19))
        signo = 0;  // Aquário
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
        signo = 1;  // Peixes
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
        signo = 2;  // Áries
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
        signo = 3;  // Touro
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        signo = 4;  // Gêmeos
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21))
        signo = 5;  // Câncer
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22))
        signo = 6;  // Leão
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        signo = 7;  // Virgem
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        signo = 8;  // Libra
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        signo = 9;  // Escorpião
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        signo = 10; // Sagitário
    else
        signo = 11; // Capricórnio

    printf("Você é do seguinte signo do zodíaco: %s\n", nomes_signos[signo]);
}
