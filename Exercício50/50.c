/*
Escreva um programa que leia um valor e imprima todas as possíveis combinações em 
que o lançamento de um par de dados tenha como resultado da soma dos valores dos 
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve 
imprimir as seguintes combinações: 
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numero1, i, j;
i = 1;
j = 1;
//ENTRADA DE VALORES
do
{
    printf("Insira um numero entre 2 e 12.\n");
    scanf("%d", &numero1);
} while (!(numero1>1 && numero1<13));

//CORPO DO ALGORITIMO
do
{
    do{
        if (j+i==numero1)
        {
            printf("%d  %d\n", i, j);
        }
        j++;
    }while (j<7);
 j = 1;
 i++;   
} while (i <7);

//SAIDA DE VALORES
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}