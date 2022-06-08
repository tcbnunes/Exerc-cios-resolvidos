/*
Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero1, numero2, numero3, soma, menor;
printf("Insira tres numeros. \n");
scanf("%d%d%d", &numero1, &numero2, &numero3);

menor = numero1;
soma = numero1+numero2+numero3;

if (menor>numero2){
    menor = numero2;
}
if(menor>numero3){
    menor = numero3;
}
soma-=menor;
printf("A soma dos dois maiores e: %d. \n", soma);
system("PAUSE");
return 0;
}