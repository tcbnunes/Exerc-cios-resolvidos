/*
Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float base, altura, area;
double perimetro;
printf("Insira os valores da base e algura do retangulo. \n");
scanf("%f%f", &base,&altura);
area  = base*altura;
perimetro = (base+altura)*2;
printf("Valor da area: %0.2f.\nValor do prerimetro:%0.2f.\n ", area, perimetro);
system("PAUSE");
return 0;
}