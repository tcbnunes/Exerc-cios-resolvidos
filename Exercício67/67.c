/*
Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior 
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro 
vetor.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int v1[10], v2[10], vMaior[10];

//ENTRADA DE VALORES
printf("Insira os valores de 10 numeros inteiros do primeiro vetor.\n");
for(int i = 0; i<10; i++){
    scanf("%d", &v1[i]);
    vMaior[i] = v1[i];
}
printf("Insira os valores de 10 numeros inteiros do segundo vetor.\n");
for(int i = 0; i<10; i++){
    scanf("%d", &v2[i]);
    if(vMaior[i] < v2[i]){
        vMaior[i] = v2[i];
    }
}


printf("O vetor maior e:\n");
for(int i =0; i <10 ;i++){
    printf("%d - %d\n", i+1,vMaior[i]);
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}