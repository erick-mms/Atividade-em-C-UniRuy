#include <stdio.h>
int main(){
    float prova1,prova2,prova3,m;
    
    printf("Insira a nota da prova 1\n");
    scanf("%f", &prova1);
    printf("Insira a nota da prova 2\n");
    scanf("%f", &prova2);
    printf("Insira a nota da prova 3\n");
    scanf("%f", &prova3);
    
    m=((prova1*2)+(prova2*3)+(prova3*5))/10;
    printf("A media final da disciplina e de: %.1f", m);
}
