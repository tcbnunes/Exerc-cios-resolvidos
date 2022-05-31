/*
Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int idadeDias, anos, meses, dias;
printf("Insira o valor da idade em dias. \n");
scanf("%d", &idadeDias);
meses = idadeDias/30;
dias = idadeDias%30;
anos = meses/12;
meses = meses%12;
printf("O idade informada corresponde a %d anos, %d meses e %d dias.\n", anos, meses, dias);
system("pause");
return 0;
}