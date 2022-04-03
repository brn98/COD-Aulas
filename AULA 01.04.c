#include<stdio.h>

int main(){
    int x=0, cont, soma=0;
    
    for(cont=85;cont<=907;cont++){
        if(cont%2==0){
            printf("\n\n##################################################\n\tNUM ATUAL: %i\n", cont);
            x++;
            soma+=cont;
        }
    }
    printf("A QUANTIDADE DE NUMEROS IMPRESSOS FOI: %i\n",x);
    printf("VALOR DE TODOS OS PARES SOMADOS: %i\n##################################################\n\n", soma);

    return 0;
}