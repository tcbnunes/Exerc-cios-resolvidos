/*
Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação:
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações.
*/
//INICIALIZAÇÃO DO ALGORITIMO
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
//DECLARAÇÃO DE VARIAVEIS
float nota1, nota2, nota3, nota4, nota5;
char situacao;

//ENTRADA DE VALORES
printf("Insira o valor das notas dos cinco exames. \n");
scanf("%f%f%f%f%f", &nota1, &nota2, &nota3, &nota4, &nota5);

//CORPO DO ALGORITIMO
nota1 -=70;
nota2 -=70;
nota3 -=70;
nota4 -=70;
nota5 -=70;
if(nota1>=0 && nota2>=0 && nota4>=0){
    if(nota3>=0 && nota5>=0){
        situacao = 'A';
    }else if(nota3>=0 || nota5>=0){
        situacao = 'B';
    }else{
        situacao = 'C';
    }
}else if(nota1>=0 && nota2>=0 && nota3>=0){
    situacao = 'C';
}else{
    situacao = 'R';
}


//SAIDA DE VALORES
switch (situacao)
{
case 'A':
    printf("A classificacao do aluno e: A.\n");
    break;
case 'B':
    printf("A classificacao do aluno e: B.\n");
    break;
case 'C':
    printf("A classificacao do aluno e: C.\n");
    break;
case 'R':
    printf("O aluno foi reprovado. \n");
    break;
default:
    printf("O aluno foi reprovado. \n");
    break;
}

//ENCERRAMENTO DO ALGORITIMO
system("PAUSE");
return 0;
}