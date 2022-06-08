/*
Escreva um programa que leia 3 números e calcule a média ponderada entre eles. 
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int numero1, numero2, numero3, maior;
float media;
printf("Insira tres numeros. \n");
scanf("%d%d%d", &numero1, &numero2, &numero3);

maior = numero1;

if (maior<numero2){
    maior = numero2;
}
if(maior<numero3){
    maior = numero3;
}
media = (numero1+numero2+numero3+maior)*(2.5)/10;

printf("A media e %0.1f. \n", media);
system("PAUSE");
return 0;
}