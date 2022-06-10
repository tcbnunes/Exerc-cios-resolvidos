/*
A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são 
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos 
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par

Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três 
termos. 
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int numero1, numero2, termo, parcial;

//ENTRADA DE VALORES
printf("Insira o primeiro termo da sequencia.\n");
scanf("%d", &numero1);
fflush(stdin);
printf("Insira o segundo termo da sequencia.\n");
scanf("%d", &numero2);
fflush(stdin);
do
{
    printf("Insira um numero de termos da sequencia.\n");
    scanf("%d", &termo);
    fflush(stdin);
    if (termo<3){
        printf("Para existir esta serie sao necessarios pelo menos tres termos.\n");
    }   
} while (termo<3);

//CORPO DO ALGORITIMO
printf("%d, %d, ", numero1, numero2);
for (int i = 2; i < termo; i++)
{
    if (i%2==0)
    {
        parcial = numero1 + numero2;
    }else
    {
        parcial = numero1 - numero2;
    }
    printf("%d", parcial);
    if(i<(termo-1)){
        printf(", ");
    }
    numero1 = numero2;
    numero2 = parcial;
}

//SAIDA DE VALORES
printf("...\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}