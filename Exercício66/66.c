/*
Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em 
um segundo vetor e imprima este último.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int v1[10], v2[10];

//ENTRADA DE VALORES
printf("Insira os valores de 10 numeros inteiros do vetor.\n");
for(int i = 0; i<10; i++){
    scanf("%d", &v1[i]);
    v2[i] = v1[i];
}

//SAIDA DE VALORES
printf("O vetor copia e:\n");
for(int i =0; i <10 ;i++){
    printf("%d - %d\n", i+1,v2[i]);
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}