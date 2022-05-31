/*
Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um 
valor de temperatura em Fahrenheit e exibi-lo em Celsius
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float temp;
printf("Insira o valor de uma temperatura em Fahrenheit. \n");
scanf("%f", &temp);
temp = (temp-32)*5/9;
printf("Valor da temperatura em Celsius: %0.2fºC.\n", temp);
system("pause");
return 0;
}