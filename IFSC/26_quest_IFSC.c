#include <stdio.h>

int main(){
    float salary;
    printf("Diga seu salario Bruto\n");
    scanf("%f", &salary);
    
    salary=salary-(0.10*salary);
    salary=salary-(0.05*salary);
    printf("Seu salario liquido e de: %.2fR$", salary);
}
