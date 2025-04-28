#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod_aluno;
    float nota1=0;
    float nota2=0;
    float nota3=0;
    float media=0;
    float bignota=0;
    
    while (1==1)
    {
        printf("informe o codigo do aluno\n");
        scanf("%d", &cod_aluno);
        if (cod_aluno<0)
        {
            break;
        }
        printf("informe a 1 nota\n");
        scanf("%f", &nota1);
        printf("informe a 2 nota\n");
        scanf("%f", &nota2);
        printf("informe a 3 nota\n");
        scanf("%f", &nota3);
        if (nota1>nota2 && nota1>nota3)
        {
            bignota=nota1;
            media=(bignota*4+nota2*3+nota3*3)/10;   
        }else if (nota2>nota1 && nota2>nota3)
        {
            bignota=nota2;
            media=(bignota*4+nota1*3+nota3*3)/10;
        }else if (nota3>nota1 && nota3>nota2)
        {
            bignota=nota3;
            media=(bignota*4+nota2*3+nota1*3)/10;
        }
        printf("aluno de codigo %d\n", cod_aluno);
        printf("suas notas foram %.2f, %.2f e %.2f, respectivamente\n", nota1, nota2, nota3);
        printf("a media das notas e %.2f\n", media);
        if (media>=5)
        {
            printf("e voce foi APROVADO!!!!!!!!\n");
        }else{
            printf("e voce foi REPROVADO!!!!!!!!\n"); 
        }
        
    }

    
}   