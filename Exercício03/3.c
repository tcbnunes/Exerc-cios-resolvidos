/*
Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(){;
float raio, perimetro, area;
printf("Insira o valor do raio da circunferEncia. \n");
scanf("%f", &raio);
area  = raio*raio*PI;
perimetro = 2*PI*raio;
printf("Valor da area: %0.2f.\nValor do prerImetro:%0.2f.\n ", area, perimetro);
system("pause");
return 0;
}