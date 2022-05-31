/*
Dado os três lados de um triângulo determinar o perímetro do mesmo. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float lado1,lado2,lado3, perimetro;
printf("Insira o valor do primeiro lado. \n");
scanf("%f", &lado1);
printf("Insira o valor do segundo lado. \n");
scanf("%f", &lado2);
printf("Insira o valor do terceiro lado. \n");
scanf("%f", &lado3);
perimetro = lado1+lado2+lado3;
printf("Valor do prerimetro:%0.2f.\n ", perimetro);
system("pause");
return 0;
}