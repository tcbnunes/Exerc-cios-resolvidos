/*
Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores 
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores 
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, 
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). 
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 
18416 são amigos, por exemplo).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int amigo1, amigo2, soma1, soma2, i;
soma1 = 0;
soma2 = 0;
//ENTRADA DE VALORES
printf("Insira o valor dos dois numeros inteiros para veriricacao. \n");
scanf("%d%d", &amigo1, &amigo2);

//CORPO DO ALGORITIMO
for(i = 1; i <amigo1; i++){
    if(amigo1%i==0){
    soma1 = soma1 + i;
}
}
for(i = 1; i <amigo2; i++){
    if(amigo2%i==0){
    soma2 = soma2 + i;
}
}

//SAIDA DE VALORES
if(amigo1==soma2 && amigo2==soma1){
    printf("Os numero sao amigos.\n");
}
else
{
    printf("Os numero nao sao amigos.\n");
}
printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}