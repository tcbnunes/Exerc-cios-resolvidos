/*
Escreva  um  programa  que  ordene  um  array  de  inteiros  de  15  posições  utilizando  o 
método da bolha (bubble sort).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_DO_VETOR 6

void entradaDeValores();
void ordenacaoBubbleSort();
void impressaoDeVetor();

//DECLARAÇÃO DE VARIAVEIS
int vetorDeEntrada [TAMANHO_DO_VETOR];

void entradaDeValores(){
    printf("Insira os %d valores do vetor\n", TAMANHO_DO_VETOR);
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
    scanf("%d", &vetorDeEntrada[i]);
    }
    printf("\n");
}

void ordenacaoBubbleSort(){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++)
{
   for (int j = 0; j < TAMANHO_DO_VETOR-i-1; j++)
   {
    int variavelDeTransicao;

    if (vetorDeEntrada [j]>vetorDeEntrada[j+1]){
    variavelDeTransicao = vetorDeEntrada [j];
    vetorDeEntrada [j]= vetorDeEntrada [j+1];
    vetorDeEntrada [j+1] = variavelDeTransicao;
        }     
    }
}
}
void impressaoDeVetor(){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++)
    {
        printf("%d ", vetorDeEntrada[i]);
    }
    printf("\n");
}
int main(){
system("cls");

//ENTRADA DE VALORES
entradaDeValores();

//CORPO DO ALGORITIMO
ordenacaoBubbleSort();

//SAIDA DE VALORES
impressaoDeVetor();

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}