/*
Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int valorSaque, notasUm, notasDois, notasCinco, notasDez, notasVinte, notasCinquenta, notasCem;
printf("Insira o valor do saque. \n");
scanf("%d", &valorSaque);
while(valorSaque>0){
if(valorSaque>=100){
    notasCem = valorSaque/100;
    valorSaque = valorSaque - notasCem*100;
    printf("%d notas de 100.\n", notasCem);
}else{
    if(valorSaque>=50){
        notasCinquenta = valorSaque/50;
        valorSaque = valorSaque - notasCinquenta*50;
        printf("%d notas de 50.\n", notasCinquenta);
    }else{
        if(valorSaque>=20){
            notasVinte = valorSaque/20;
            valorSaque = valorSaque - notasVinte*20;
            printf("%d notas de 20.\n", notasVinte);
        }else{
            if(valorSaque>=10){
                notasDez = valorSaque/10;
                valorSaque = valorSaque - notasDez*10;
                printf("%d notas de 10.\n", notasDez);
            }else{
                if(valorSaque>=5){
                notasCinco = valorSaque/5;
                valorSaque = valorSaque - notasCinco*5;
                printf("%d notas de 5.\n", notasCinco);
                }else{
                    if(valorSaque>=2){
                    notasDois = valorSaque/2;
                    valorSaque = valorSaque - notasDois*2;
                    printf("%d notas de 2.\n", notasDois);
                    }else{
                        if(valorSaque>=1){
                        notasUm = valorSaque;
                        printf("%d notas de 1.\n", notasUm);
                        }
                    }
                }
            }
        }
    }
}
}
system("pause");
return 0;
}