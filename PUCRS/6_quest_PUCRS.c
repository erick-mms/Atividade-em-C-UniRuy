#include <stdio.h>

int main()
{
    int voto;
    int canditado1 = 0;
    int canditado2 = 0;
    int canditado3 = 0;
    int canditado4 = 0;
    int voto_nulo = 0;
    int voto_branco = 0;
    
    while(1==1){
        printf("Digite em quem você vai votar:\n");
        scanf("%d", &voto);
        if(voto == 0 ){
            break;
        }
        switch(voto){
            case 1:
                canditado1++;
                break;
            case 2:
                canditado2++;
                break;
            case 3:
                canditado3++;
                break;
            case 4:
                canditado4++;
                break;
            case 5:
                voto_nulo++;
                break;
            case 6:
                voto_branco++;
                break;
            default:
                printf("Dado invalido, tente novamente\n");
                break;
        }
    }
    
    printf("O canditado1 teve %d de votos\n", canditado1);
    printf("O canditado2 teve %d de votos\n", canditado2);
    printf("O canditado3 teve %d de votos\n", canditado3);
    printf("O canditado4 teve %d de votos\n", canditado4);
    printf("teve %d de votos nulos\n", voto_nulo);
    printf("teve %d de votos brancos\n", voto_branco);
}