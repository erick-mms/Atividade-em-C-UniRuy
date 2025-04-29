#include <stdio.h>
//somar uma "matriz"
int main(){
   int som=0, m[2][3];
   for(int lin=0; lin<=1; lin++){
      for(int col=0; col<=2; col++){
          printf("insira o elemento [%d][%d]", lin, col);
          scanf("%d", &m[lin][col]);
          som += m[lin][col];
      }
   }
   printf("%d", som);
}
