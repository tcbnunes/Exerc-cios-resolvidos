/*
Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse 
a população do país B
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int ano = 0;
unsigned int habitantesA, habitantesB, taxaA, taxaB;
//ENTRADA DE VALORES
habitantesA = 5000000;
habitantesB = 7000000;
taxaA = 3;
taxaB = 2;

//CORPO DO ALGORITIMO
while (habitantesA<habitantesB)
{
    habitantesA = habitantesA*(taxaA+100)/100;
    habitantesB = habitantesB*(taxaB+100)/100;
    ano++;
}

//SAIDA DE VALORES
if(ano==0){
    printf("O pais A ja possui maior populacao");
}else{
    printf("O pais A ultrapassou a populacao do pais B em %d anos.\n");
}
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}