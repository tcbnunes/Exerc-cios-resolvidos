/*
Escreva um programa que leia três números e mostre o maior entre eles
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero1, numero2, numero3, maior;
printf("Insira tres numeros. \n");
scanf("%d%d%d", &numero1, &numero2, &numero3);

maior = numero1;

if (maior<numero2){
    maior = numero2;
}
if(maior<numero3){
    maior = numero3;
}
printf("O maior numero e %d. \n", maior);
system("PAUSE");
return 0;
}