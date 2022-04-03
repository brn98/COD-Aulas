/* 6. Usando FOR, construa um algoritmo que o usuário informa 5 valores, ao final o 
algoritmo imprime o maior e o menor valor inserido e a média dos valores*/

#include<stdio.h>

main(){
    int cont,valor=0,maior=0,menor=0,media=0;

    for (cont=5;cont>=1; cont--){
        printf("Digite um valor: ");
        scanf("%i",&valor);
        if(valor>maior)maior=valor;
        if(valor<menor)menor=valor;
        media+=valor;
    }
    media=media/5;
    printf("O maior valor inserido foi:\t%i\nO menor valor inserido foi:\t%i\nMedia dos valores inseridos:\t%i",maior,menor,media);
}