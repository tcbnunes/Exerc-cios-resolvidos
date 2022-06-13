/*
Construa um programa que receba um número e verifique se ele é um número triangular. 
(Um número é triangular quando é resultado do produto de três números consecutivos. 
Exemplo: 24 = 2 x 3 x 4)
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numeroEntrada, n1, n2, n3;
bool res = true;

//ENTRADA DE VALORES
printf("Insira o numero.\n");
scanf("%d", &numeroEntrada);
fflush(stdin);

//CORPO DO ALGORITIMO
for(unsigned int i = 1; i<numeroEntrada;i++){
    n1 = i;
    if (n1*(n1+1)*(n1+2)==numeroEntrada)
    {
        printf("O numero e triangular.\n");
        res = false;
    }
}

if(res==true){
    printf("O numero nao e triangular.\n");
}

//SAIDA DE VALORES
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}