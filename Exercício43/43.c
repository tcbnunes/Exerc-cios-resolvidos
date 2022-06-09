/*
 Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 
100.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int i;

//CORPO DO ALGORITIMO
for (i = 0; i < 101; i +=2)
{
    printf("%d \n", i);
}

system("PAUSE");
return 0;
}