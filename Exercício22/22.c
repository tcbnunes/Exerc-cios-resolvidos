/*
Escreva um programa que leia um número e exiba o seu módulo
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero;
printf("Insira um numero para receber o modulo. \n");
scanf("%d", &numero);
if (numero<0){
    numero = numero*(-1);
    printf("O modulo do numero e: %d\n",numero);
}
else{
    printf("O modulo do numero e: %d\n",numero);
}
system("PAUSE");
return 0;
}