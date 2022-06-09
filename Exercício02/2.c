/*
Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");

float lado, area;
double perimetro;

printf("Insira o valor do lado do quadrado. \n");
scanf("%f", &lado);

area  = lado*lado;
perimetro = lado*4;

printf("Valor da area: %0.2f.\nValor do prerimetro:%0.2f.\n ", area, perimetro);

system("PAUSE");
return 0;
}