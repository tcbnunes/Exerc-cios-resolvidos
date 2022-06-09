/*
Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
//system("cls");
//DECLARAÇÃO DE VARIAVEIS
float renda, emprestimo;
int prestacoes;

//ENTRADA DE VALORES
printf("Informe a renda do solicitante. \n");
scanf("%f", &renda);
printf("Informe o valor do emprestimo solicitado. \n");
scanf("%f", &emprestimo);
printf("Informe a quantidade de prestacoes desejada para pagamento. \n");
scanf("%d", &prestacoes);

//CORPO DO ALGORITIMO E SAIDA DE VALORES
if(emprestimo<=(renda*10)){
    if((emprestimo/prestacoes)<=(renda*0.3)){
        printf("O emprestimo pode ser concedido. \n");
    }else{
        printf("O emprestimo nao pode ser concedido.\nPrestacoes com valor muito alto. \n");
    }  
}else{
    printf("O emprestimo nao pode ser concedido, renda mensal insuficiente. \n");
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}