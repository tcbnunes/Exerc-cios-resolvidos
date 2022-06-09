/*
Escreva um programa que leia 5 números, e imprima a média entre eles
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
float numero1, numero2, numero3, numero4, numero5, media;
//ENTRADA DE VALORES
printf("Insira o cinco valores para o calculo da media.\n");
scanf("%f%f%f%f%f", &numero1, &numero2, &numero3, &numero4, &numero5);

//CORPO DO ALGORITIMO
media = (numero1 + numero2 + numero3 + numero4 + numero5)/5;

//SAIDA DE VALORES
printf("A media dos valores e: %.4f.\n", media);
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}