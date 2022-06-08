/*
Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de 
dias deste mês.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int mes;
printf("Insira o numero equivalente ao mes. \n");
scanf("%d", &mes);

if(mes<1|| mes>12){
    printf("Insira um numero valido equivalente ao mes. \n");
    scanf("%d", &mes);
}

if (mes<8){
    if(mes%2==1){
        printf("O mes possui 31 dias.\n");
    }else if(mes==2){
        printf("O mes possui 28 ou 29 dias.\n");   
        }else{
            printf("O mes possui 30 dias.\n");
        }
        
    }
else if (mes%2==1){
        printf("O mes possui 30 dias.\n");
    }else{
        printf("O mes possui 31 dias.\n");
}
system("PAUSE");
return 0;
}