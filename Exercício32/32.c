/*
Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
char caracter, op;

//ENTRADA DE VALORES
printf("Insira um caracter. \n");
scanf("%c", &caracter);
int valor = (int) caracter;

//CORPO DO ALGORITIMO
/*Valores referentes a numeros, vogais e consoantes na tabela ASCII*/
if(47<valor && valor<58){
    //printf("O caracter e um numero. \n");
    op = 'N';
}
else if(64<valor && valor<91 || 96<valor && valor<123){
    if(valor==65 || valor==69 || valor==73 || valor==79 || valor==85 || valor==97|| valor==101|| valor== 105 || valor== 111 || valor== 117){
        op = 'V';
        //printf("O caracter e uma vogal. \n");
    }else {
        //printf("O caracter e uma consoante. \n");
        op = 'C';
    }
}

//SAIDA DE VALORES
switch (op)
{
case 'N':
    printf("O caracter e um numero. \n");
    break;

case 'V':
    printf("O caracter e uma vogal. \n");
    break;

case 'C':
    printf("O caracter e uma consoante. \n");
    break;

default:
    printf("O caracter e um simbolo. \n");
    break;
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}