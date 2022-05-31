/*
Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
Km/h. Para tal, multiplique o valor em m/s por 3,6.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float velocidade;
printf("Insira o valor velocidade em m/s. \n");
scanf("%f", &velocidade);
velocidade = velocidade*3.6;
printf("Valor da velocidade em Km/h: %0.2f.\n", velocidade);
system("pause");
return 0;
}