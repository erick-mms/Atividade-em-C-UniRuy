#include <stdio.h>

float fatorial(float numero) {
    
    for (int i = numero; i > 1; i--)
    {
        numero= numero*(i-1);
    }

    return numero;
}
int main() {
    int N = 0;
    float E = 0;

    do {
        printf("digita ai um numero positivo: ");
        scanf("%d", &N);
    } while (N < 0);
    
    E = 1 + (1 / fatorial(1)) + (1 / fatorial(2)) + (1 / fatorial(3)) + (1 / fatorial(N));
     printf("%.2f", E);
    

    

}