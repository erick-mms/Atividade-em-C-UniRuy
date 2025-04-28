#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char str[20];
    int day_ano;

    printf("DIGA SEU NOME\n");
    scanf("%s", str);
    printf("diga sua IDADE\n");
    scanf("%d", &idade);
    day_ano=idade*365;
    printf("%s, tu tem %d dias de vida :0", str, day_ano);
 
}