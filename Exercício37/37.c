/*
Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int area;
int tipo;
float valor, unitario;
//ENTRADA DE VALORES
printf("Insira o indice do tipo de praga conforme abaixo. \n1 ERVAS DANINHAS\n2 GAFANHOTOS\n3 BROCA\n4 TODOS\n");
scanf("%d", &tipo);

printf("Insira o valor da area a ser pulveridada em acres.\n");
scanf("%d", &area);

switch (tipo)
{
case 1:
    unitario = 50;
    break;
case 2:
    unitario = 100;
    break;
case 3:
    unitario = 150;
    break;
case 4:
    unitario = 250;
    break;

default:
    break;
}

//CORPO DO ALGORITIMO
valor = area*unitario;
if(area>1000){
    if(valor>750){
        valor = valor*0.95;
        valor = (valor - 750)*0.9+750;
    }
}else if (valor>750){
    valor = (valor - 750)*0.9+750;
}


//SAIDA DE VALORES
printf("O valor a ser pago e de %.2f.\n", valor);

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}
