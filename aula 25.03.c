#include <stdio.h>

main(){
    /*int idade,sexo,feminino=0,maioridade=0;
    while(idade!=-1){
        printf("\nIDADE OU -1 PARA ENCERRAR: ");
        scanf("%i",&idade);
        if(idade==-1)break;
        printf("\nSEXO SENDO 1 COMO MASCULINO E 2 PARA FEMININO: ");
        scanf("%i",&sexo);
        if(idade>maioridade)maioridade=idade;
        if(sexo==2&&idade>=18&&idade<=35)feminino++;
    }
    printf("\n\tA maior idade entre o habitantes e: %i\n",maioridade);
    printf("\t A quantidade de mulheres entre 18 a 35 e: %i",feminino);*/

    int quantidade=1,cod,cont;
    float cod1=1.5,cod2=2.0,cod3=2.5,cod4=3;0,cod5=1.5;

    do{
        printf("\n/******************************************************************************\n
            Produto             |  Codigo   |   Preco (unitario)\n
            ------------------------------------------------------\n
            Cachorro quente     |    1      |     R$ 1,50\n
            Hamburger           |    2      |     R$ 2,00\n
            Cheeseburger        |    3      |     R$ 2,50\n
            Eggcheeseburger     |    4      |     R$ 3,00\n
            Refrigerante        |    5      |     R$ 1,50\n
            *******************************************************************************/\n\n
            ")
        printf("Informe o COD do produto: \n\t")
        scanf("%i",cod);
        printf("Informe a quantidade: \n\t")
        scanf("%i",quantidade);
        switch (cod){
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:

                break;
            case 5:
                
                break;        
            default:
                printf("Opcao incorreta, tente novamente.")
        }
        printf("Deseja continuar? 1 - SIM ou 2 - NAO");
        scanf("%i",cont);
        if(cont>2)printf("Valor incorreto"cont=2);
    }while(cont!=1);
    
}