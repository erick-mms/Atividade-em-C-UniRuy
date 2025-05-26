#include <stdio.h>

int main() {
    int a,b;
    //entrada de dados
    printf("Insira a:\n");
	scanf("%d", &a);
    printf("Insira b:\n");
	scanf("%d", &b);
	
	//verifica se são multiplos usando módulo
	if(a%b==0 || b%a==0){
        printf("são multiplos.");
	}else{
	    printf("não são multiplos.");
	}
}
