/*
Escreva  um  programa  que  leia  um  vetor  de  15  posições  de  inteiros.  Em  seguida,  o 
programa  deve  ler  um  valor  inteiro  e  imprimir  o  número  de  vezes  que  este  valor  ocorre 
no vetor.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int valor [15], verifica, vezes;

//ENTRADA DE VALORES
vezes = 0;

printf("Insira os 15 valores inteiros do vetor.\n");
for(int i = 0; i<15; i++){
    scanf ("%d", &valor[i]);
}
printf("Insira um valor para verificar quantas vezes ele ocorre.\n");
scanf ("%d", &verifica);

//CORPO DO ALGORITIMO
for(int i = 0; i<15; i++){
    if (valor[i]==verifica){
        vezes++;
    }
}

//SAIDA DE VALORES
if (vezes==0){
    printf("O numero informado nao esta contido no vetor.");
}else{
    printf("O numero informado aparece %d vezes no vetor.", vezes);
}

printf("\n");

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}