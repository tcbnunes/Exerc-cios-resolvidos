/*
O número e (número de Euler) pode ser representado e calculado por meio da utilização 
da série de Taylor para e quando x=1, como a soma da seguinte série infinita:
e = 1 + 1/n!
Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o 
cálculo do número de Euler para cada um dos n primeiros elementos da série.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int n;
float soma, termo;
soma = 1;
termo = 1;

//ENTRADA DE VALORES
printf("Insira o valor dos termos para exibir o numero de Euler. \n");
scanf("%d", &n);

//CORPO DO ALGORITIMO
for(float i = 1; i <=n; i++){
    termo = termo*(1/i);
    soma = soma + termo;
}

//SAIDA DE VALORES
printf("O valor do somatorio e : %f.\n", soma);
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}