#include<stdio.h>
#include<ctype.h>
#include<locale.h>
#define SENHASISTEMA 1234
#define SALDOINICIAL 5000.00


int main(){
	int senha, cont = 0;
	char menu;
	float saldo=SALDOINICIAL, valor;
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("INFORME SUA SENHA: \n");
		scanf("%i",&senha);
		if(senha==SENHASISTEMA){
			printf("\n\tSENHA CORRETA!\n\n");
			do{
			printf("############################################\n");
			printf("Boa noite! \nEscolha uma das opções abaixo: ");
			printf("\n\n\n1 - Saldo \n\n2 - Saque \n\n3 - Deposito\n\nS - SAIR");
			printf("\n\n############################################\n\n ==> ");
			fflush(stdin);
			scanf("%c",&menu);
			menu=tolower(menu);
			switch(menu){
					case '1':
						printf("\tSALDO: %.2f\n",saldo);
						break;		
					case '2':
						printf("\nDigite o valor a sacar: \n ==> ");
						scanf("%f", &valor);
						if(valor<0){
						printf("Valor invalido.\n", saldo);
						break;
						}
						if(valor>saldo)
						printf("Saldo insuficiente\n\t\t\tSaldo: %.2f\n)", saldo);
						else{
						saldo-=valor;
						printf("Valor sacado: %.2f\n\t\t\tNovo saldo: %.2f\n", valor, saldo);
						}
						break;
					case '3':
						printf("\nDigite o valor a ser depositado: \n ==> ");
						scanf("%f", &valor);
						if(valor<0)printf("VALOR INCORRETO");
						else{
							saldo+=valor;
							printf("Voce depositou: %.2f\n\t\t\tNovo saldo: %.2f\n", valor, saldo);
						}
						break;
					case 's':
						printf("OBRIGADO POR UTILIZAR NOSSO BANCO <3");
					default:
						printf("OPÇÃO INVALIDA");
				}
			}while(menu!='s');
		}else{
			printf("\n\tSENHA INCORRETA\n");
			cont++;
		}
	}while(senha!=SENHASISTEMA&&cont<3);
	if(cont==3)printf("\tCONTA BLOQUEADA");
}