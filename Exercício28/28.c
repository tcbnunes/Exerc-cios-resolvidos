/*
Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
char letra;
printf("Insira uma letra. \n");
scanf("%c", &letra);

if (letra=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
    printf("A letra e vogal. \n");
}
else{
    printf("A letra e consoante. \n");
}

system("PAUSE");
return 0;
}