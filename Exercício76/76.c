/*
Escreva  um  programa  em  C,  que  leia  uma  string  e  conte  quantas  ocorrências  de  vogais 
existem nesta string
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_DO_VETOR 50

//DECLARAÇÃO DE VARIAVEIS
char vetorDeEntrada[TAMANHO_DO_VETOR];

void entradaDeValores();
int contadorDeVogais(char frase []);

void entradaDeValores(){
    printf("Insira uma string de ate %d.\n", TAMANHO_DO_VETOR);
    gets(vetorDeEntrada);
    printf("\n");
}

int contadorDeVogais(char frase []){
    int vogais = 0;

    for (int i = 0; frase[i]!='\0'; i++){
        switch (frase[i]){
        case 'a': case 'á': case 'â': case 'ã': case 'à': case 'á': case 'A': case 'Á': case 'À': case 'Ã': case 'Â': 
        case 'e': case 'é': case 'ê': case 'E': case 'É': case 'Ê':
        case 'o': case 'ó': case 'õ': case 'O': case 'Ó': case 'Õ': 
        case 'i': case 'í': case 'î': case 'I': case 'Í': case 'Î':
        case 'u': case 'ú': case 'U': case 'ú':
            vogais++;
            break;
        default:
            break;
        }
    }
    return vogais;    
}

int main(){
system("cls");

//ENTRADA DE VALORES
entradaDeValores();

//SAIDA DE VALORES
printf("A string informada possui %d vogais.\n", contadorDeVogais(vetorDeEntrada));
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}