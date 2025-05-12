#include <stdio.h>
int main(){
    int cod_aluno=1;
    float nota1,nota2,nota3,media;
    
   while (1==1)
   {
    printf("Insira o seu código de aluno:\n");
    scanf("%d", &cod_aluno);
    if (cod_aluno<1)
    {
        break;
    }
    printf("Insira a 1º nota: \n");
    scanf("%f", &nota1);
    printf("Insira a 2º nota: \n");
    scanf("%f", &nota2);
    printf("Insira a 3º nota: \n");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf("Aluno de código %d\n", cod_aluno);
    printf("a média das suas notas foi: %.1f\n", media);
   }
}
