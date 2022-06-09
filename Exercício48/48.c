/*
Escreva um programa que determine se um dado número N (digitado pelo usuário) é 
primo ou não.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numero1, resto;
resto = 0;

//ENTRADA DE VALORES
printf("Insira um numero para verificacao.\n");
scanf("%d", &numero1);

//CORPO DO ALGORITIMO
for (int i = 2; i < numero1; i++){
    if (numero1%i==0){
        resto++;
    }    
}

//SAIDA DE VALORES
if (resto !=0)
{
    printf("O numero nao e primo.\n");
}else
{
    printf("O numero e primo.\n");
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}