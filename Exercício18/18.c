/*
Escreva um programa que permute o valor de duas variáveis inteiras.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int primeriaVariavel, segundaVariavel, auxiliar;
printf("Insira o valor da primeira variavel inteira. \n");
scanf("%d", &primeriaVariavel);
printf("Insira o valor da segunda variavel inteira. \n");
scanf("%d", &segundaVariavel);
auxiliar = primeriaVariavel;
primeriaVariavel = segundaVariavel;
segundaVariavel = auxiliar;
printf("Agora a primeria variavel e %d e a segunda variavel e %d.\n", primeriaVariavel,segundaVariavel);
system("pause");
return 0;
}