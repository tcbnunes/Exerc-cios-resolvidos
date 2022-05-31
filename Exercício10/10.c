/*
Converter um inteiro informado menor que 32 para sua representação em binário
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero, cinco, quatro, tres, dois, um;
printf("Insira um numero inteiro menor que 32. \n");
scanf("%d", &numero);
cinco = numero/16;
quatro = (numero%16)/8;
tres = ((numero%16)%8)/4;
dois = (((numero%16)%8)%4)/2;
um = (((numero%16)%8)%4)%2;
printf("Representado em binario como: %d%d%d%d%d.\n", cinco, quatro, tres, dois, um);
system("pause");
return 0;
}