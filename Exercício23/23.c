/*
Escreva um programa que leia um número e imprima se este número é ou não par.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero;
printf("Insira o numero para verificar se e par. \n");
scanf("%d", &numero);

if (numero%2==0 || numero==0){
    numero = numero*(-1);
    printf("O numero e par\n");
    }
else{
    printf("O numero e impar\n");
}
system("PAUSE");
return 0;
}