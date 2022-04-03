#include <stdio.h>

main(){
    float divida;
    int mes;
   
    printf("Digite valor da divida inicial: ");
    scanf("%f", &divida);
    printf("Voce vai atrasar quantos meses [1-5]? ");
    scanf("%i", &mes);
   
    switch (mes){
        case 1:
        divida*=0.01;
            printf("\t\tValor da sua divida atualizado e: %.2f", divida);
        return;
       
        case 2:
        divida*=0.02;
            printf("\t\tValor da sua divida atualizado e: %.2f", divida);
        return;
       
        case 3:
        divida*=0.03;
            printf("\t\tValor da sua divida atualizado e: %.2f", divida);
        return;
       
        case 4:
        divida*=0.04;
            printf("\t\tValor da sua divida atualizado e: %.2f", divida);
        return;
       
        case 5:
        divida*=0.05;
            printf("\t\tValor da sua divida atualizado e: %.2f", divida);
        break;
       
        default:
            printf("\t\tVoce nao digitou um valor valido de meses!");
    }
}