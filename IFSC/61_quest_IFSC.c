#include <stdio.h>
int main(){
    int med_type; float nota[3],media;

    printf("Quais são as notas?\n");
    for (int i = 0; i < 3; i++)
    {
       printf("Nota %d: ",i+1);
       scanf("%f", &nota[i]);
    }
    printf("Escolha o tipo de operação:\n1- Aritimetica\n2- Ponderada (3,3,4)\n");
    scanf("%d", &med_type);

    if (med_type==1)
    {
        media=(nota[1]+nota[2]+nota[3])/3;
    }
    else if (med_type==2)
    {
        media=((nota[1]*3)+(nota[2]*4)+(nota[3]*4))/10;
    }
    else
    {
        printf("Opção Inválida, tente novamente.");
    }
    
    printf("A média das notas foi: %.1f",media);
}
