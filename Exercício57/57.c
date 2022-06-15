/*
Sendo S = 1 + (1/n^3)+...
 , um somatório de N (informado pelo 
usuário) termos, escreva um programa para calcular S para um número N.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
unsigned int N, i;
float soma;
soma = 0;

//ENTRADA DE VALORES
printf("Insira o valor dos termos para exibir o somatorio. \n");
scanf("%d", &N);

//CORPO DO ALGORITIMO
for(i = 1; i <=N; i++){
    soma = soma + (1/pow(i,i));
}
//SAIDA DE VALORES

printf("O valor do somatorio e : %f.\n", soma);
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}