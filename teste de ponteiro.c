
#include <stdio.h>

int main() {
   int num = 18, b = 0;
   int *aux;
   
   printf("conteudo de num  %d \n", num);
   
   aux = &num;
   *aux = 35;
   
   printf("end ram num      %p \n", &num);
   printf("conteudo ram aux %p \n", aux);
   printf("end ram aux      %p \n", &aux);

   printf("conteudo de num  %d \n", num);
}
