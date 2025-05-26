#include <stdio.h>

int main() {
    int a,b,c;
  //entrada de dados
    printf("Insira a:\n");
	scanf("%d", &a);
    printf("Insira b:\n");
	scanf("%d", &b);
    printf("Insira c:\n");
	scanf("%d", &c);

  //verificação por comparação
	if(a>b && a>c){
        printf("a: %d, É o maior\n",a);
	}else if(b>a && b>c){
        printf("b: %d, É o maior\n",b);
	}else if(c>a && c>b){
        printf("c: %d, É o maior\n",c);
	}else{
	    printf("a,b,c são iguais.");
	}
}
