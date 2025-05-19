#include <stdio.h>
#include <string.h>

int main(){
    float diaria,dias;
    char cliente[30];

    printf("Qual seu nome?:\n");
    fgets(cliente, sizeof(cliente), stdin);
    printf("Insira a quantidade de dias da estadia:\n");
    scanf("%f", &dias);
    

    //decide a taxa de serviços e o valor total, a partir da quantidade de dias ser maior, menor ou igual a 15
    if (dias>15)
    {
        diaria=(dias*60)+(5.50*dias);
    }
    else if (dias==15)
    {
        diaria=(dias*60)+(6*dias);
    }
    else if (dias<15)
    {
        diaria=(dias*60)+(8*dias);
    }
    //trata o nome, para aparecer na mesma linha
    cliente[strcspn(cliente, "\n")]='\0';
    printf("%s, o total de sua conta foi R$%.1f\n", cliente, diaria);
}
