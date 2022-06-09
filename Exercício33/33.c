/*
Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
int x,y,quadrante;

//ENTRADA DE VALORES
printf("Insira o valor da coordenada do eixo x. \n");
scanf("%d", &x);
printf("Insira o valor da coordenada do eixo y. \n");
scanf("%d", &y);

//CORPO DO ALGORITIMO E SAIDA DE VALORES
if(x==0){
    if (y==0){
    printf("O ponto pertence a origem. \n");
    }else{
        printf("O ponto pertence ao eixo das abcissas. \n");
    }
}
else if(y==0){
    printf("O ponto pertence ao eixo das ordenadas. \n");
}
else if(y>0 && x>0){
    printf("O ponto pertence ao primeiro quadrante. \n");
}
else if(y>0 && x<0){
    printf("O ponto pertence ao segundo quadrante. \n");
}
else if(y<0 && x<0){
    printf("O ponto pertence ao terceiro quadrante. \n");
}
else if(y<0 && x>0){
    printf("O ponto pertence ao quarto quadrante. \n");
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}