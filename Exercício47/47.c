/*
Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
unsigned int numero1, numero2, quociente, i;
quociente = 0;
i = 0;

//ENTRADA DE VALORES
printf("Insira os dois valores para o calculo do quociente.\n");
scanf("%d%d", &numero1, &numero2);


//CORPO DO ALGORITIMO
printf("O resto da divisao e: ");
while (numero1>=numero2)
{
    numero1 -= numero2;
}
if(numero1 == 0){
    printf("%d \(ZERO\).",numero1);
}else{
    printf("%d",numero1);
}
printf("\n.");
system("PAUSE");
return 0;
}