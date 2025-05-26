#include <stdio.h>

int main(){
    int nota;

    printf("Insira sua nota: ");
    scanf("%d", &nota);
    //identificação do conceito baseado em condições
    if (nota>=0 && nota<50)
    {
        printf("Insuficiente, nota: %d\n", nota);
    }else if (nota>49 && nota<65)
    {
        printf("Regular, nota: %d\n", nota);
    }else if (nota>64 && nota<85)
    {
        printf("Bom, nota: %d\n", nota);
    }else if (nota>84 && nota<101)
    {
        printf("Ótimo, nota: %d\n", nota);
    }else{
        printf("Nota inválida.\n");
    }
}
