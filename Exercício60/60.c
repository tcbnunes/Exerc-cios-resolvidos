/*
A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois 
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo. 
Escreva um programa mostrando que a afirmação é verdadeira para todo número par 
entre 500 e 1000. O programa deve imprimir o número par e os dois primos que somados 
dão o número par.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int a, b, cont, divisores;
cont = 500;
a = 2;

//CORPO DO ALGORITIMO
while (cont <= 1000){
    printf("%d e a soma de ", cont);
    do{
        a++;
        b = cont - a;
        divisores = 0;
        for (int iA = 2; iA < a; iA++){
            if (a%iA==0){
            divisores++;
            }
        }
        for(int iB = 2; iB < b; iB++){
            if(b%iB==0){
                divisores++;
            }
        }
    }while (divisores!=0);
    printf("%d e %d\n", a, b);
    divisores = 0;
    cont = cont + 2;
    a=2;
}

//SAIDA DE VALORES
printf("\n");
//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}