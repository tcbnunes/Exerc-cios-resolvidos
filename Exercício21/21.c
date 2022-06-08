/*
Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
double numero;
printf("Insira numero para verificar o sinal. \n");
scanf("%Le", &numero);
if (numero<0){
    printf("Numero negativo.%0.2f\n",numero);
}
else{
    printf("Numero positivo. %0.2f\n",numero);
}
system("PAUSE");
return 0;
}