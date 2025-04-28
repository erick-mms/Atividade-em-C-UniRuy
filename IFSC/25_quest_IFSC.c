#include <stdio.h>

int main(){
    int int1, int2;
    printf("Diga um valor\n");
    scanf("%d", &int1);
    printf("Diga outro\n");
    scanf("%d", &int2);
    printf("o quociente e %d e o resto e %d",+(int1/int2),+(int1%int2));
}
