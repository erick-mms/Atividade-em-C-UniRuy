#include <stdio.h>
int main() {
    float preco; int codigo;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o código de origem: ");
    scanf("%d", &codigo);

    printf("R$ %.2f -- ", preco);

    switch (codigo) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5: case 6:
            printf("Nordeste\n");
            break;
        case 7: case 8: case 9:
            printf("Sudeste\n");
            break;
        default:
            if (codigo >= 10 && codigo <= 20)
                printf("Centro-Oeste\n");
            else if (codigo >= 25 && codigo <= 35)
                printf("Nordeste\n");
            else
                printf("Importado\n");
    }
}
