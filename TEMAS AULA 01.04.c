/* 6. Usando FOR, construa um algoritmo que o usuário informa 5 valores, ao final o 
algoritmo imprime o maior e o menor valor inserido e a média dos valores*/

#include<stdio.h>

main(){
    int cont,valor=0,maior,menor;
    float media;

    for (cont=5;cont>=1; cont--){
        printf("Digite um valor: ");
        scanf("%i",&valor);
        if(cont==5){
		menor=valor;
		maior=valor;
		}else if(valor<menor)menor=valor;
        if(valor>maior)maior=valor;
        media+=valor;
    }
    media=(float)media/5;
    printf("O maior valor inserido foi:\t%i\nO menor valor inserido foi:\t%i\nMedia dos valores inseridos:\t%.2f",maior,menor,media);
}
