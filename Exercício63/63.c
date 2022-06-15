/*
Escreva um programa que leia dois vetores de números reais de mesma dimensão (10 
posições), e imprima o vetor resultante da soma destes vetores.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
float v1[10], v2[10], vSoma[10];

//ENTRADA DE VALORES
printf("Insira os valores de 10 numeros reais do primeiro vetor.\n");
for(int i = 0; i<10; i++){
    scanf("%f", &v1[i]);
}
printf("Insira os valores de 10 numeros reais do segundo vetor.\n");
for(int i = 0; i<10; i++){
    scanf("%f", &v2[i]);
}
//CORPO DO ALGORITIMO
printf("O vetor soma e: {");
for (int i = 0; i < 10; i++){
    vSoma[i]= v1[i]+v2[i];
    if(i!=9){
        printf("%.2f, ", vSoma[i]);
    }else{
        printf("%.2f}\n.", vSoma[i]);
    }
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}