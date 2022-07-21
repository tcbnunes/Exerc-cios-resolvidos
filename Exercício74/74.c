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

#define TAMANHO_DO_VETOR 6

int vetorDeArmazenamento [TAMANHO_DO_VETOR];
int elementoDeEntrada, posicaoDeEntrada;

void iniciarVetorDeEntrada();
void imprimirVetorDeEntrada();
void menuDeOperacoes();
void inserirElementoFinal();
void inserirElementoPosicao();
void removerElementoPosicao();
void removerElementoIndicado();
void removerDuplicidades();
int validaElementoDeEntrada();


void iniciarVetorDeEntrada(){
    printf("Insira os %d inteiros do vetor.\n", TAMANHO_DO_VETOR);
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        scanf("%d", &vetorDeArmazenamento[i]);
    }
}

void imprimirVetorDeEntrada(){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("%d ", vetorDeArmazenamento[i]);
    }
    printf("\n");
}

void menuDeOperacoes(){
    char indiceDeOperacao;

    printf("Insira o indice da operacao conforme menu abaixo\na. Inserir um elemento no final do vetor\nb. Inserir um elemento em uma dada posicaoo\nc. Remover um elemento de uma posicaoo indicada\nd. Remover todos elementos iguais a um valor indicado\ne. Gerar um novo array sem duplicidades a partir deste array\nq. Sair do programa\n");
    scanf(" %c", &indiceDeOperacao);
    switch (indiceDeOperacao)
    {
    case 'a':
        inserirElementoFinal();
        imprimirVetorDeEntrada();
        break;
    case 'b':
        inserirElementoPosicao();
        imprimirVetorDeEntrada();
        break;
    case 'c':
        removerElementoPosicao();
        imprimirVetorDeEntrada();
        break;
    case 'd':
        removerElementoIndicado();
        imprimirVetorDeEntrada();
        break;
    case 'e':
        removerDuplicidades();
        imprimirVetorDeEntrada();
        break;
    case 'q':
        exit(0);
        break;

    default:
        printf("Favor inserir um caracter valido.\n");
        break;
    }
    printf("Deseja executar mais alguma operacao?\nS/N\n");
    scanf(" %c", &indiceDeOperacao);
    if (indiceDeOperacao=='S'){
        menuDeOperacoes();
    }
    
}

void inserirElementoFinal(){
    printf("Insira o inteiro para adicionar ao elemento final do vetor.\n");
    scanf("%d", &elementoDeEntrada);
    vetorDeArmazenamento[TAMANHO_DO_VETOR-1] = elementoDeEntrada;
}

void inserirElementoPosicao(){
    printf("Insira o inteiro para adicionar ao vetor.\n");
    scanf("%d", &elementoDeEntrada);
    printf("Insira a posicao.\n");
    scanf("%d", &posicaoDeEntrada);
    vetorDeArmazenamento[posicaoDeEntrada-1] = elementoDeEntrada;
}

void removerElementoPosicao(){
    printf("Insira a posicao para remover o elemento.\n");
    scanf("%d", &posicaoDeEntrada);
    vetorDeArmazenamento[posicaoDeEntrada-1] = 0;
}

void removerElementoIndicado(){
    printf("Insira o inteiro remover do vetor.\n");
    scanf("%d", &elementoDeEntrada);
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
//ENTRADA DE VALORES
iniciarVetorDeEntrada();

//CORPO DO ALGORITIMO
menuDeOperacoes();
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}