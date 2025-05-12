#include <stdio.h>
int main(){
    int A,B,C,D,E,DigitoV,S;
    
    printf("Informe o primeiro digito\n");
    scanf("%d", &A);
    printf("Informe o segundo digito\n");
    scanf("%d", &B);
    printf("Informe o terceiro digito\n");
    scanf("%d", &C);
    printf("Informe o quarto digito\n");
    scanf("%d", &D);
    printf("Informe o quinto digito\n");
    scanf("%d", &E);
    
    S=(6*A)+(5*B)+(4*C)+(3*D)+(2*E);
    DigitoV=S % 7;
    printf("O digito verificador e: %d\n", DigitoV);
}
