#include <stdio.h>

int main() {
    float nota[3],media;
    //entrada de dados
    for(int i=1; i<4; i++) {
		printf("Insira sua %dº nota:\n", i);
		scanf("%f", &nota[i]);
	}
   
   //calculo da media
   media=(nota[1]+nota[2]+nota[3])/3;
   
   //verificação da nota
   if (media>=7){
       printf("APROVADO!\nmedia: %.1f", media);
   }else if (media<7 && media>=4){
       printf("Em prova final.\nmedia: %.1f", media);
   }else if (media<4 && media>0){
       printf("REPROVADO!\nmedia: %.1f", media);
   }else{
       printf("Valores inválidos, tente novamente.");
   }
}
