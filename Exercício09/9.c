/*
Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado 
seu raio e sua altura.
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(){
float raio, altura, volume;
printf("Insira o valor do raio da lata. \n");
scanf("%f", &raio);
printf("Insira o valor da altura da lata. \n");
scanf("%f", &altura);
volume  = raio*raio*PI*altura;
printf("Valor do volume: %0.2f.\n ", volume);
system("pause");
return 0;
}