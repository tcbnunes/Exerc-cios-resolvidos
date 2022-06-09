/*
Ler um número inteiro e exibir o seu sucessor.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");

int numero;

printf("Insira um nUmero inteiro.\n");
scanf("%d", &numero);

numero = numero+1;

printf("Sucessor do inteiro: %d. \n", numero);

system("pause");
return 0;
}
