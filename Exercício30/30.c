/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool
Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro

Gasolina
Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser 
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro 
do álcool é R$ 1,90
*/
#include <stdio.h>
#include <stdlib.h>
#define VGASOLINA 2.7
#define VALCOOL 1.9
int main(){
char combustivel;
float volume, valor;
valor = 0;

printf("Insira o volume de combustivel em litros. \n");
scanf("%f", &volume);

printf("Insira o tipo de combustivel.\n A para ALCOOL \n G para GASOLINA \n");
scanf(" %c", &combustivel);

while (valor==0)
{
    switch (combustivel)
    {
    case 'A':{
        valor = volume*VALCOOL;
        break;
    }
    case 'G':{
        valor = volume*VALCOOL;
        break;
    }
    default:
        printf("Insira um tipo de combustivel valido.\n A para ALCOOL \n G para GASOLINA \n");
        scanf(" %c", &combustivel);
        break;
    }
}

printf("O valor do combustivel e: %0.2f. \n", valor);

system("PAUSE");
return 0;
}
