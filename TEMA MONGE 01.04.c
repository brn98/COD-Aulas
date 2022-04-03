/*4. Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser
feito com grãos de trigo dispostos em um tabuleiro de 32 casas, de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do
quadro anterior. Crie um algoritmo para calcular o total de grãos que o monge recebeu.*/

main(){
    int cont,trigo=1,soma=1;

    printf("1 - Qnt atual: 1\n");
    for(cont=2;cont<32;cont++){
        soma*=2;
        trigo+=soma;
        printf("%i - Qnt atual: %i\n",cont,soma);
    }
    printf("%i - Qnt atual: %i\n",cont,trigo);
    printf("O monge recebeu um total de:\n\t%i",trigo);
}