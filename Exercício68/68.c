/*
Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e 
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de 
cada uma das duas quinzenas.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int indice [30], media1, media2, maiorChuva, menorChuva, maiorDia, menorDia;
//ENTRADA DE VALORES
printf("Insira o indice pluviometrico do mes de junho.\n");
for(int i = 0; i<30; i++){
    scanf ("%d", &indice[i]);
}
maiorChuva = indice[0];
menorChuva = maiorChuva;


maiorDia = 0;
menorDia = 0;
media1 = 0;
media2 = 0;


//CORPO DO ALGORITIMO
/* PRIMEIRO CODIGO
for(int i = 0; i < 15; i++){
    media1 += indice[i];
}
media1 /=15;

for(int i = 15; i < 30; i++){
    media2 += indice[i];
}
media2 /=15;

for (int i = 0; i <30; i++){
    if (maiorChuva < indice[i]){
        maiorChuva = indice [i];
        maiorDia = i;
    }
    if (menorChuva > indice[i]){
        menorChuva = indice [i];
        menor dia = i;
    }
}
*/

for(int i = 0; i<30; i++){
    if (i<15){
        media1 += indice[i];
    }else{
        media2 += indice[i];
    }
    if (maiorChuva < indice[i]){
        maiorChuva = indice [i];
        maiorDia = i;
    }
    if (menorChuva > indice[i]){
        menorChuva = indice [i];
        menorDia = i;
    }
}
media1 /=15;
media2 /=15;

//SAIDA DE VALORES
printf("A media dos indices e %d na primeira quinzena e %d e na segunda quinzena.\nO dia que mais choveu foi %d com %d de indice.\nE o que menos choveu foi %d com %d e indice.\n",media1, media2, maiorDia+1, maiorChuva, menorDia+1, menorChuva);
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}