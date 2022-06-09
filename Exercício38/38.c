/*
Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for
divisível por 400, ele volta a ser bissexto.
a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ...
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int ano;
//ENTRADA DE VALORES
printf("Insira o valor do ano.\n");
scanf("%d", &ano);

//CORPO DO ALGORITIMO E SAIDA DE VALORES
if(ano%4==0){
    if(ano%100==0){
        if(ano%400==0){
            printf("O ano e bissexto.\n ");
        }else{
            printf("O ano nao e bissexto.\n "); 
        }
        
    }else{
        printf("O ano e bissexto.\n ");
    }

}else{
    printf("O ano nao e bissexto.\n ");
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}