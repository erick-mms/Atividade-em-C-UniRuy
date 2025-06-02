#include <stdio.h>
#include <math.h> //necessario para raiz quadrada
int main() {
   int option; float n;
   
   printf("Insira um numero: ");
   scanf("%f",&n);
   printf("101 - Raiz quadrada\n102 - A metade\n103 - 10 porcento do número\n104 - O dobro\nEscolha a opção do que fazer com o numero: ");
   scanf("%d",&option);
   
    switch(option){
      case 101: 
        printf("%.f",sqrt(n)); //função pra raiz
        break;
      case 102:
        printf("%.1f",(n/2));
        break;
      case 103:
        printf("%.2f",(n*0.10));
        break;
      case 104:
        printf("%.1f",(n*2));
        break;
      default:
        printf("Sem categoria definida para essa idade, tente novamente\n");
        break;
    }
}
