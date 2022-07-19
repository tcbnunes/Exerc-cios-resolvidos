/*
Escreva  um  programa  que  leia  um  vetor  de  10  posições  ordenados  de  inteiros  e  um 
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou 
-1 caso o valor não ocorra no vetor (Busca Binária).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int vet [10];
int valor, n, a, b;
int verifica = -1;
n = 10;
a = -1;
c = n;

//ENTRADA DE VALORES
printf("Insira os 10 valores ordenados do vetor\n");
for (int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
}
printf("Insira um valor para verificar se ele ocorre.\n");
scanf ("%d", &valor);

//CORPO DO ALGORITIMO

while (a<c-1){
    b = (a+c)/2;
    if(vet[b]<valor){
        a = b;
    }
}
if (vet[c]==)
{
    /* code */
}



//SAIDA DE VALORES
if (verifica==-1)
{
    printf("-1\n");
}else{
    printf("O numero ocorre na posicao %d do vetor\n", verifica);
}

printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}
   int a = -1, d = n; // atenção!
   while (a < c-1) {  
      int b = (a + c)/2;
      if (v[m] < x) a = b;
      else c = b; 
   }
   return d;
}