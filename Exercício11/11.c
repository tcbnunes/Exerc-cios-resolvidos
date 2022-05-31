/*
Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida 
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 
2 notas de provas.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float prova1, prova2, prova3, prova4, notaSemestre, notaBimestre1, notaBimestre2;
printf("Insira o valor das notas das provas referentes ao primeiro bimestre. \n");
scanf("%f%f", &prova1, &prova2);
printf("Insira o valor das notas das provas referentes ao segundo bimestre. \n");
scanf("%f%f", &prova3, &prova4);
notaBimestre1 = prova1 + prova2;
notaBimestre2 = prova3 + prova4;
notaSemestre = (notaBimestre1 + notaBimestre2)/2;
printf("Nota do semestre é %0.2f.\n", notaSemestre);
system("pause");
return 0;
}

