#include <stdio.h>
int main(){
    int matricula,ano,sem;

    do{
        
        printf("Digite sua matrícula, de 6 numeros: \n");
        scanf("%d", &matricula);
            ano=matricula/10000;
            sem=((matricula%10000)/100)/10;

        if (sem==1)
        {
             printf("Voce se matriculou no ano 20%d, no primeiro semestre \n", ano);
        }
        else if (sem==2)
        {
            printf("Voce se matriculou no ano 20%d, no segundo semestre \n", ano);
        }
        else
        {
            printf("Matricula invalida, tente novamente.\n");    
        }

    } while (sem != 1 && sem !=2);
}
