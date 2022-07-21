/*
Escreva  um  programa  em  C,  que  leia  uma  string,  gere  uma  nova  string  com  o  texto 
invertido e imprima esta nova string.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_DO_VETOR 100

//DECLARAÇÃO DE VARIAVEIS
char vetorDeEntrada[TAMANHO_DO_VETOR];

void entradaDeValores();
int tamanhoDoVetorInserido(char vetorDeEntrada[]);
char* inverterStringSequencial(char vetorDeEntrada[]);

int tamanhoDoVetorInserido(char vetorDeEntrada[]){
    int tamanhoDoVetor = 0;
    while (vetorDeEntrada[tamanhoDoVetor]!='\0'){
        tamanhoDoVetor++;
    }
    return tamanhoDoVetor;
}

char* inverterStringSequencial(char vetorDeEntrada[]){
    int tamanhoDaString = tamanhoDoVetorInserido(vetorDeEntrada);
    for (int i = 0; i < (tamanhoDaString/2); i++){
        char variavelAuxiliar;
        int valorFinal = tamanhoDaString - i -1;
        variavelAuxiliar = vetorDeEntrada[i];
        vetorDeEntrada[i] = vetorDeEntrada[valorFinal];
        vetorDeEntrada[valorFinal] = variavelAuxiliar;
    }
    return vetorDeEntrada;
}

void entradaDeValores(){
    printf("Insira uma string de ate %d para ser invertida.\n", TAMANHO_DO_VETOR);
    gets(vetorDeEntrada);
    printf("\n");
}

int main(){
system("cls");
//ENTRADA DE VALORES
entradaDeValores();

printf("%s\n", inverterStringSequencial(vetorDeEntrada));
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}