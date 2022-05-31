/*
Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
equivalente desse circuito
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float r1, r2, r3, rEquiv;
printf("Insira o valor das resistencias R1, R2 e R3. \n");
scanf("%f%f%f", &r1, &r2, &r3);
rEquiv = (r1*r2)/(r1+r2);
rEquiv = rEquiv + r3;
printf("Resistencia equivalente do circuito: %0.2f.\n", rEquiv);
system("pause");
return 0;
}