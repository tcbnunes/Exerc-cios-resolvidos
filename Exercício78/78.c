/*
Escreva  um  programa  em  C,  que  leia  uma  string  e  um  caracter  e  conte  o  número  de 
ocorrências do caracter lido na string.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_DO_VETOR 100

int verificarOcorrenciaEmString(char vetorDeEntrada[],char valorParaVerificacao);

int verificarOcorrenciaEmString(char vetorDeEntrada[],char valorParaVerificacao){
    int contador = 0;
    for (int i = 0; i < strlen(vetorDeEntrada); i++){
        if (vetorDeEntrada[i] == valorParaVerificacao){
            contador++;
        }
    }
    return contador;
}

int main(){
system("cls");
char vetorDeEntrada [TAMANHO_DO_VETOR];
char valorParaVerificarcao;
//ENTRADA DE VALORES
printf("Insira uma string de no maximo 100 caracteres.\n");
gets(vetorDeEntrada);
printf("Agora insira o caracter para verificar a ocorrencia na string.\n");
scanf(" %c", &valorParaVerificarcao);

//SAIDA DE VALORES
printf("O caracter ocorre na string %d vezes.\n", verificarOcorrenciaEmString(vetorDeEntrada, valorParaVerificarcao));
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}