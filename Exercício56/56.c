/*
Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores 
próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o 
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é 
igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numero, soma, i;
soma = 0;

//ENTRADA DE VALORES
printf("Insira o valor do numero inteiros para veriricacao. \n");
scanf("%d", &numero);

//CORPO DO ALGORITIMO
for(i = 1; i <numero; i++){
    if(numero%i==0){
    soma += i;
}
}

//SAIDA DE VALORES
if(numero==soma){
    printf("O numero e perfeito.\n");
}
else
{
    printf("O numero nao e perfeito.\n");
}
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}