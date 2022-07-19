/*
Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve 
fornecer as seguintes operações: 
a. Inserir um elemento no final do vetor 
b. Inserir um elemento em uma dada posição 
c. Remover um elemento de uma posição indicada 
d. Remover todos elementos iguais a um valor indicado 
e. Gerar um novo array sem duplicidades a partir deste array
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_DO_VETOR 30

int vetorDeArmazenamento [TAMANHO_DO_VETOR];

void iniciarVetorDeEntrada();
void imprimirVetorDeEntrada();
void menuDeOperacoes();
void inserirElementoFinal(int elementoDeEntrada);
void inserirElementoPosicao(int posicaoDeEntrada);
void removerElementoPosicao(int posicaoDeEntrada);
void removerElementoIndicado(int elementoDeEntrada);
void removerDuplicidades();
int validaElementoDeEntrada();


void iniciarVetorDeEntrada(){
    printf("Insira os %d inteiros do vetor.\n", TAMANHO_DO_VETOR);
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        scanf(%d, &vetorDeArmazenamento[i]);
    }
}

void imprimirVetorDeEntrada(){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("%d ", vetorDeArmazenamento[i]);
    }
}

void menuDeOperacoes(){
    printf("Insira o indice da operacao conforme menu abaixo\n
    a. Inserir um elemento no final do vetor\n
    b. Inserir um elemento em uma dada posição\n 
    c. Remover um elemento de uma posição indicada\n 
    d. Remover todos elementos iguais a um valor indicado\n 
    e. Gerar um novo array sem duplicidades a partir deste array\n
    q. Sair do programa\n");
    scanf(" %c", &indiceDeOperacao);
    switch (indiceDeOperacao)
    {
    case 'a':
        inserirElementoFinal();
        break;
    case 'b':
        inserirElementoPosicao();
        break;
    case 'c':
        removerElementoPosicao();
        break;
    case 'd':
        removerElementoIndicado();
        break;
    case 'e':
        removerDuplicidades();
        break;
    case 'q':
        exit(1);
        break;

    default:
        break;
    }
}

void inserirElementoFinal(int elementoDeEntrada){
    vetorDeArmazenamento[TAMANHO_DO_VETOR-1] = elementoDeEntrada;
}

void inserirElementoPosicao(int elementoDeEntrada, int posicaoDeEntrada){
    vetorDeArmazenamento[posicaoDeEntrada+1] = elementoDeEntrada;
}

void removerElementoPosicao(int posicaoDeEntrada){
    vetorDeArmazenamento[posicaoDeEntrada+1] = 0;
}

void removerElementoIndicado(int elementoDeEntrada){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        if (vetorDeArmazenamento[i]==elementoDeEntrada){
            vetorDeArmazenamento[i]=0;
        }
    }
}

void removerDuplicidades(){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        for ( int j = i+1; j < TAMANHO_DO_VETOR; j++){
            if (vetorDeArmazenamento[i]==vetorDeArmazenamento[j]){
                vetorDeArmazenamento[j]=0;
            }
        }
    }
}


int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS

char indiceDeOperacao;

//ENTRADA DE VALORES
iniciarVetorDeEntrada();

//CORPO DO ALGORITIMO


//SAIDA DE VALORES
printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}