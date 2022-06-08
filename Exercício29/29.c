/*
Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um 
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo 
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de 
desconto é 334,29, o que seja menor.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float salario, desconto;
printf("Insira o valor do salario. \n");
scanf("%f", &salario);
desconto = 334.29;
if (desconto>salario*11/100){
    desconto = salario*11/100;
}
salario = salario - desconto;

printf("O valor do salario com desconto e: %0.2f. \n", salario);

system("PAUSE");
return 0;
}