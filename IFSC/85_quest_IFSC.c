#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int jogador, computador;

    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
    printf("Sua escolha: ");
    scanf("%d", &jogador);

    if (jogador < 1 || jogador > 3) {
        printf("Jogada invalida!\n");
        return 1;
    }

    srand(time(NULL)); // inicializa o gerador de aleatórios
    computador = (rand() % 3) + 1; // gera 1, 2 ou 3

    printf("Computador escolheu: ");
    if (computador == 1) printf("Pedra\n");
    else if (computador == 2) printf("Papel\n");
    else printf("Tesoura\n");

    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        printf("Voce venceu!\n");
    } else {
        printf("Voce perdeu!\n");
    }
}
