/*
Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem 
decrescente).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");

for (int i = 100; i >=0; i--)
{
    printf("%d \n",i);
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}