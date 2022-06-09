/*
Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");

int numero1, numero2, quociente, resto;

printf("Insira o valor do dividendo. \n");
scanf("%d", &numero1);
printf("Insira o valor do divisor. \n");
scanf("%d", &numero2);

quociente= numero1/numero2;
resto = numero1%numero2;

printf("Valor do quociente e: %d.\nValor do resto: %d. \n", quociente, resto);

system("pause");
return 0;
}
