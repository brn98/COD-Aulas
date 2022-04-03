#include <stdio.h>

int main(){
    int nota, cont=1;
    while (cont < 5){
        scanf("\n%i", &cont);
        printf("\nDigite sua nota: ");
        scanf("%i", &nota);
        switch(nota){
            case 10:
                printf("\t\tNota: A");
                break;
            case 9:
                printf("\t\tNota: A");
                break;
            case 8:
                printf("\t\tNota: B");
                break;
            case 7:
                printf("\t\tNota: C");
                break;
            default:
                printf("\t\tReprovado!");
        }
    }
}