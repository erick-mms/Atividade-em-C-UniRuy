#include <stdio.h>
#include <string.h>

int main(){
    int quant_paraf,quant_porcas,quant_arruelas;
    float paraf=1,porcas=0.5,arruelas=0.25,total_pag,desconto;
    char nome_cliente[30];

    
    printf("Qual seu nome?");
    fgets(nome_cliente, 30, stdin);
    printf("Quantos Parafusos foram comprados?\n");
    scanf("%d", &quant_paraf);    
    printf("Quantas porcas foram compradas?\n");
    scanf("%d", &quant_porcas);    
    printf("Quantas Arruelas foram compradas?\n");
    scanf("%d", &quant_arruelas);    

    total_pag=(paraf*quant_paraf)+(porcas*quant_porcas)+(arruelas*quant_arruelas);
    desconto=((paraf*quant_paraf)*0.20)+((porcas*quant_porcas)*0.10)+((arruelas*quant_arruelas)*0.30);

    nome_cliente[strcspn(nome_cliente, "\n")]='\0';
    printf("%s, Voce comprou %d Parafusos, %d Porcas e %d Arruelas\n", nome_cliente, quant_paraf, quant_porcas, quant_arruelas);
    printf("com um desconto de R$%.1f, e no total, deve-se pagar R$%.1f ", desconto, (total_pag-desconto));
}
