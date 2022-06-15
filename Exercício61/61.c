/*
Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na 
posição (um por linha).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int i[20];

//SAIDA DE VALORES
for(int n = 0; n<20; n++){
    i[n] = 0;
    printf("POSICAO: %d  VALOR: %d\n", n, i[n]);
}
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}