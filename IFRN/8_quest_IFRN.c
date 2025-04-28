#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media_nota;
    
    printf("Olá aluno, digite sua nota 1:\n");
    scanf("%f", &nota1);
    printf("agora digite sua nota 2:\n");
    scanf("%f", &nota2);
    printf("por ultimo, digite sua nota 3:\n");
    scanf("%f", &nota3);
    media_nota=(nota1*1+nota2*2+nota3*3)/(1+2+3);
    printf("Sua media na materia e:%.2f\n", media_nota);    
}
