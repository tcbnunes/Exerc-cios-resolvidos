/*
Escreva um programa que carregue um array com tamanho variável. O tamanho máximo 
do array é de 100 posições (carga de array com sentinela).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int valor [100];
int contador;
contador = 0;
int teste = 0;

//ENTRADA DE VALORES
printf("Insira os valores inteiros do vetor.\nInsira 0 para menu de saida.\n");
do{
    if (contador==5){
        printf("Numero de valores maximo atingido.\n");
        break;
    }
    scanf("%d", &valor[contador]);
    fflush(stdin);
    if (valor[contador]==0){
        int teste;
        printf("Insira o valor do indice desejado.\n0. Voce deseja inserir 0 no seu vetor?\n1. Voce deseja encerrar o seu vetor?\n");
        scanf("%d", &teste);
    }
    contador++;
}while(!teste);

//SAIDA DE VALORES
printf("Foram inseridos %d inteiros no vetor\n", contador);
printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}