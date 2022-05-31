/*
Escreva um programa que calcule a raiz de uma equação do primeiro grau.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float a, b, x;
printf("Insira o valor de A referente a equacao no formato (Ax + B = 0). \n");
scanf("%f", &a);
printf("Insira o valor de B referente a equacao no formato (Ax + B = 0). \n");
scanf("%f", &b);
x = (-b)/a;
printf("A raiz da equacao e %0.2f.\n", x);
system("pause");
return 0;
}