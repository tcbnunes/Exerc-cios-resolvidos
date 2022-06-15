/*
Faça um programa em C que leia um array de 10 posições e conte quantos números pares 
são elementos do array. Imprima esta quantidade.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int i[10];
int pares = 0;

//ENTRADA DE VALORES
printf("Insira os valores de 10 numeros inteiros.\n");
for(int n = 0; n<10; n++){
    scanf("%d", &i[n]);
    if (i[n]%2==0)
    {
        pares++;
    }
}

//SAIDA DE VALORES
printf("O array possui %d numeros pares.\n", pares);

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}