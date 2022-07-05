/*
Escreva  um  programa  que  leia  um  vetor  de  10  posições  de  inteiros  e  um  inteiro.  O 
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o 
valor não ocorra no vetor (Busca Sequencial).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int vet [10];
int valor;
int verifica = -1;
//ENTRADA DE VALORES
printf("Insira os 10 valores do vetor\n");
for (int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
}
printf("Insira um valor para verificar se ele ocorre.\n");
scanf ("%d", &valor);

//CORPO DO ALGORITIMO
for (int i = 0; i < 10; i++){
    if (valor==vet[i]){
        verifica = i+1;
    }
}

//SAIDA DE VALORES
if (verifica==-1)
{
    printf("-1\n");
}else{
    printf("O numero ocorre na posicao %d do vetor\n", verifica);
}

printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}