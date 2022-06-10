/*
A série de Fibonacci é formada pela sequencia: 
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N 
sendo uma entrada do algoritmo).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numero, i, j, k;
i = 1;
j = 0;
//ENTRADA DE VALORES
do
{
    printf("Insira um numero de termos da sequencia.\n");
    scanf("%d", &numero);
} while (!(numero>0 && numero<10000));
//CORPO DO ALGORITIMO

for (int v = 0; v < numero; v++){
    k=i;
    printf("%d, ", i);
    i+=j;
    j=k;
}

//SAIDA DE VALORES
printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}