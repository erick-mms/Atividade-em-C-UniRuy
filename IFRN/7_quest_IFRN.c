#include <stdio.h>

int main() {
    int day=0;
    int mes=0;
    int timepass=0;

    printf("qual o dia?\n");
    scanf("%d", &day);
    printf("de que mes?\n");
    scanf("%d", &mes);

    timepass=day+(30*(mes-1));
    printf("se passaram %d dias desde o inicio do ano!\n", timepass);
 
}