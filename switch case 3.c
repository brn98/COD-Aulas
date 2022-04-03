#include <stdio.h>

int main(void){
    float divida;
    int   meses,juros=0;
    
    printf("Qual o valor inicial da divida: ");
    scanf("%f", &divida);
    printf("Voce vai atrasar quantos meses [1-5]?: ");
    scanf("%d", &meses);

    switch(meses){
        case 5:
            juros++;
        case 4:
            juros++;
        case 3:
            juros++;
        case 2:
            juros++;
        case 1:
            juros++;
        break;
        
        default:
        printf("Voce nao digitou um valor valido de meses\n");
    }
    printf("Juros: %d\n ",juros);
    divida*=(1+(juros/100.0));
    printf("Valor atualizado da divida: R$ %.2f\n", divida);
}