#include <stdio.h>

int main(){
    int A, B, C, D, result=0;
    printf("diga quem e A\n");
    scanf("%d", &A);
    printf("diga quem e B\n");
    scanf("%d", &B);
    printf("diga quem e C\n");
    scanf("%d", &C);
    printf("diga quem e D\n");
    scanf("%d", &D);
    
    printf("A+B : %d \n",+A+B);
    printf("A+C : %d \n",+A+C);
    printf("A+D : %d \n",+A+D);
     printf("A*B : %d \n",+A*B);
     printf("A*C : %d \n",+A*C);
     printf("A*D : %d \n",+A*D);

    printf("B+C : %d \n",+B+C);
    printf("B+D : %d \n",+B+D);
     printf("B*C : %d \n",+B*C);
     printf("B*D : %d \n",+B*D);

    printf("C+D : %d \n",+C+D);
     printf("C*D : %d \n",+C*D);
}
