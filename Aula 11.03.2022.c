#include <stdio.h>

/*int main ()
{
    int n1;
    printf("Escreva a sua nota: ");
    scanf("%d", &n1);
    if(n1 >= 60){
        printf("Aprovado!");
    }else {     
        if(n1 >= 20 && n1 < 60){
            printf("Reprovado, porem podera realizar a recuperaçao!");
        }else{
            if(n1<20){
                printf("Reprovado!");
            }
        }
    } 
    return 0;
}
*/

int main()
{
    float salario, imposto;
    printf( "Digite seu salario: ");
    scanf( "%f" , &salario );
    if( salario <= 1903.98 ){
        imposto = 0;
    }else{
        if( salario >= 1903.99  &&  salario <= 2826.65 ){
            imposto = ( salario * 7.5 / 100 ) - 142.80;
        }else{
            if( salario >= 2826.66  &&  salario <= 3751.05 ){
                imposto = ( salario * 15 / 100 ) - 354.80;
            }else{
                if( salario >= 3751.06  &&  salario <= 4664.68 ){
                    imposto = ( salario * 22.5 / 100 ) - 636.13;
                }else{
                    if( salario >= 4664.68 ){
                        imposto = ( salario * 27.5 / 100 ) - 869.36;
                    }
                }
            }
        
        }
    }
    if( imposto == 0.0 ){
        printf("Voce esta isento de IRPF neste mes!");
    }else{
        printf("O valor do imposto e: R$ %.2f", imposto );
    }
    return 0;
}