/*
Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma 
de todos eles.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int i, soma;
soma = 0;

for ( i = 0; i < 101; i++)
{
    printf("%d \n",i);
    soma += i;
}
printf("%d \n", soma);

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}