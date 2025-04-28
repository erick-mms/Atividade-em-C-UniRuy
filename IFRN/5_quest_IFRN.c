#include <stdio.h>

int main() {
   float totalpag=0;
   float price_gas=0;
   float litrospag=0;

   printf("Quanto estava o R$ do litro?\n");
   scanf("%f", &price_gas);
   printf("E quanto tu pagou no total?\n");
   scanf("%f", &totalpag);
   litrospag=totalpag/price_gas;
   printf("Voce conseguiu %.2f litros de gasolina!!!", litrospag);

}