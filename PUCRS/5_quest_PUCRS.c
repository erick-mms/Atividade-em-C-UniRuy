#include <stdio.h>

int main(){
    float media;
    int contador=0;
    int numero;
    int soma_numero=0;

    do
    {
        printf("diga os numero ai: ");
        scanf("%d", &numero);
        if (numero < 0)
        {
            break;
        }
        
        soma_numero = soma_numero+numero;
        contador++;
    } while (numero > 0);
    
    media= soma_numero/contador;
    printf("a media e: %.2f", media);

}