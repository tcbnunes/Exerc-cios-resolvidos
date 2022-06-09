/*
Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int dia;
//ENTRADA DE VALORES
printf("Insira o valor do dia da semana.\n ");
scanf("%d", &dia);

//CORPO DO ALGORITIMO E SAIDA DE VALORES
switch (dia)
{
case 1:
    printf("DOMINGO\n ");
    break;
case 2:
    printf("SEGUNDA\n ");
    break;
case 3:
    printf("TERCA\n ");
    break;
case 4:
    printf("QUARTA\n ");
    break;
case 5:
    printf("QUINTA\n ");
    break;
case 6:
    printf("SEXTA\n ");
    break;
case 7:
    printf("SABADO\n ");   
    break;  
default:
    printf("ERRO: VALOR INVALIDO INFORMADO.\n ");
    break;
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}