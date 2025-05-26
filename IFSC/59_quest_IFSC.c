#include <stdio.h>

int main() {
    int num1;
    
    //entrada de dados
    printf("Insira um numero:\n");
	scanf("%d", &num1);
	
	//verifica se o numero é par ou negativo
	if((num1%2)==0){
        printf("O numero é par ");
	}else{
	    printf("O numero é impar ");
	}
	if(num1<=0){
	    printf("e o numero é negativo");
	}else{
	    printf("e o numero é positivo");
	}
}
