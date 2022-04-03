#include<stdio.h>

int main(){
    int n,fat,valor;
    printf("Informe um numero para calcular o valor fatorial:\n");
    scanf("%d", &n);
    valor=n;
    for(fat=1;n>1;n--)fat*=n;
    printf("O fatorial de %i e: %i\n",valor,fat);
   
    return 0;
}