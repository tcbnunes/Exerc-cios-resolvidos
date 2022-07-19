/*
 Escreva um  programa em C que leia um array de 20 inteiros, calcule e imprima:  
a. A moda  dos elementos no array (elemento mais freqüente). 
b. A mediana dos elementos no array (elemento central) 
c. A média 
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_DO_VETOR 10

int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int vetorDeEntrada [TAMANHO_DO_VETOR];
//int valor;
double media;
int mediana;
int moda [2];
int repeticaoDosValores [TAMANHO_DO_VETOR][2];
int variavelDeTransicao, contador, ultimoPreenchido;
contador = 0;
ultimoPreenchido = 0;

//ENTRADA DE VALORES
printf("Insira os %d valores do vetor\n",TAMANHO_DO_VETOR);
for (int i = 0; i < TAMANHO_DO_VETOR; i++){
    scanf("%d", &vetorDeEntrada[i]);
}
system("cls");
//CORPO DO ALGORITIMO
// Colocando os valores em ordem crescente
while (contador!= TAMANHO_DO_VETOR-1){
    for (int i = 0; i < TAMANHO_DO_VETOR; i++){
        if (vetorDeEntrada [i]>vetorDeEntrada[i+1] && i<TAMANHO_DO_VETOR-1){
        variavelDeTransicao = vetorDeEntrada [i];
        vetorDeEntrada [i]= vetorDeEntrada [i+1];
        vetorDeEntrada [i+1] = variavelDeTransicao;
        }
    }
    contador++;
}

//Calculando o valor da media e mediana
for (int i = 0; i < TAMANHO_DO_VETOR; i++){
    media += vetorDeEntrada [i];
}
media = media/TAMANHO_DO_VETOR;
mediana = vetorDeEntrada [TAMANHO_DO_VETOR/2];
//Calculando valor da moda
for (int i = 0; i < TAMANHO_DO_VETOR; i++){
    for (int j = 0; j <= i; j++){
        if(vetorDeEntrada[i]==repeticaoDosValores[j][0]){
            repeticaoDosValores[j][1]++;
            break;
        }
        if (j==i){
            repeticaoDosValores[ultimoPreenchido][0] = vetorDeEntrada[i];
            repeticaoDosValores[j][1] = 0;
            repeticaoDosValores[j][1]++;
            ultimoPreenchido++;
        }
    }   
}

moda [0]= repeticaoDosValores[0][0];
moda [1]= repeticaoDosValores[0][1];
for (int i = 0; i <= ultimoPreenchido - 1; i++){
    if(repeticaoDosValores[i][1]>moda[1]){
        moda [0]= repeticaoDosValores [i][0];
        moda [1]= repeticaoDosValores[i][1];
    }
}


//SAIDA DE VALORES
for (int i = 0; i < TAMANHO_DO_VETOR; i++){
    printf("%d\n",vetorDeEntrada[i]);
}
printf("A media e: %0.2f.\nA moda e: %d %d.\nA mediana e: %d.\n", media, moda[0], moda[1], mediana);


//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}