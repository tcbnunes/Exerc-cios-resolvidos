/*
Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior 
valor dentre os elementos do array
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int v1[20];
int maior, menor;

//ENTRADA DE VALORES
printf("Insira os valores de 20 numeros inteiros do vetor.\n");
for(int i = 0; i<20; i++){
    scanf("%d", &v1[i]);
}
//CORPO DO ALGORITIMO
maior = v1[0];
menor = maior;
for(int i = 0; i<20;i++){
    if(maior<v1[i]){
        maior = v1[i];
    }
    if(menor>v1[i]){
        menor = v1[i];
    }
}

//SAIDA DE VALORES
printf("O menor valor e %d e o maior valor e %d.\n", menor, maior);
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}