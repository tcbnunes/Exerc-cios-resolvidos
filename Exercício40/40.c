/*
Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o 
numero por extenso.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int numero, dezena, unidade;
//ENTRADA DE VALORES
printf("Insira o numero inteiro.\n");
scanf("%d", &numero);



//CORPO DO ALGORITIMO
if(numero==100){
    printf("Cem");
}else{
dezena = numero/10;
unidade = numero - (dezena*10);
switch (dezena)
{
case 0:
    switch(unidade){
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;

    }
    break;

case 1:
    switch(unidade){
        case 0:
            printf("Dez");
            break;
        case 1:
            printf("Onze");
            break;
        case 2:
            printf("Doze");
            break;
        case 3:
            printf("Treze");
            break;
        case 4:
            printf("Quatorze");
            break;
        case 5:
            printf("Quinze");
            break;
        case 6:
            printf("Dezesseis");
            break;
        case 7:
            printf("Dezessete");
            break;
        case 8:
            printf("Dezoito");
            break;
        case 9:
            printf("Dezenove");
            break;

    }
    break;
case 2:
    printf("Vinte");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;
    }
    break;
case 3:
    printf("Trinta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 4:
    printf("Quarenta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 5:
    printf("Cinquenta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 6:
    printf("Sessenta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 7:
    printf("Setenta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 8:
    printf("Oitenta");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
case 9:
    printf("Noventa");
    switch(unidade){
        case 0:
            break;
        case 1:
            printf(" e um");
            break;
        case 2:
            printf(" e dois");
            break;
        case 3:
            printf(" e tres");
            break;
        case 4:
            printf(" e quatro");
            break;
        case 5:
            printf(" e cinco");
            break;
        case 6:
            printf(" e seis");
            break;
        case 7:
            printf(" e sete");
            break;
        case 8:
            printf(" e oito");
            break;
        case 9:
            printf(" e nove");
            break;

    }
    break;
default:
    break;
}
}
printf("\n");
//SAIDA DE VALORES

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}