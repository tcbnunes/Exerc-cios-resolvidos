/*
Escreva um programa para gerar o invertido de um número com três algarismos 
(exemplo: o invertido de 498 é 894).
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero, centena, dezena, unidade;
printf("Insira um numero com tres algarismos. \n");
scanf("%d", &numero);
centena = numero/100;
dezena = numero/10 - centena*10;
unidade = numero - centena*100 - dezena*10;
printf("O número invertido é: %d%d%d.\n", unidade, dezena, centena);
system("pause");
return 0;
}