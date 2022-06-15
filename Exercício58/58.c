/*
O valor aproximado do número π pode ser calculado usando-se a série
VER ARQUIVO
Faça um programa que calcule e imprima o valor de π usando os N primeiros termos da 
série (N sendo informado durante a execução do algoritmo)
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
unsigned int N, i;
float soma;
soma = 0;

//ENTRADA DE VALORES
printf("Insira o valor dos termos para exibir o somatorio. \n");
scanf("%d", &N);

//CORPO DO ALGORITIMO

for(i = 1; i <=N; i++){
    if (i%2!=0){
       soma = soma + (pow(-1,i+2)/i);
       printf("O valor do somatorio e : %f.\n", soma*4);
    }
}
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}