#include <stdio.h>

int main(){
    float salario;
    int filhos;
    float media_sal;
    float contador = 0;
    float soma_sal = 0;
    float media_filhos;
    float soma_filhos = 0;
    float big_sal = 0;
    float pobres = 0;
    float quant_pobres;

    do
    {
        printf("diga quanto voce recebe:");
        scanf("%f", &salario);
        if (salario < 0)
        {
            break;
        }
        printf("diga quantos filhos ce tem:");
        scanf("%d", &filhos);

        soma_sal = soma_sal+salario;
        soma_filhos = soma_filhos+filhos;
       
        if (salario > big_sal)
        {
            big_sal = salario;
        }
        if (salario <= 100)
        {
            pobres++;
        }
        

        contador++;
    } while (salario > 0);

    media_sal = soma_sal/contador;
    media_filhos = soma_filhos/contador;
    quant_pobres = (pobres/contador) * 100;

    printf("a media salarial e: R$%.2f\n", media_sal);
    printf("a media e %.2f por habitante. \n", media_filhos);
    printf("o MAIOR salario e de: R$%.2f\n", big_sal);
    printf("o percentual de pessoas com salario ate R$100, e de:%.1f%%\n", quant_pobres);
}
