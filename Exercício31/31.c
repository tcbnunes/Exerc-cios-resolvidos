/*
No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a
seguir: 
Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0,
respectivamente).
Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).
Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).
Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de jardas passadas, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
system("cls");
float passesTentados, passesCompletos, passesTouchdown, passesInterceptados;
float jardasPassadas, ratingQB, soma;
float parcela1,parcela2,parcela3,parcela4;
printf("Insira o valor do numero de passes tentados. \n");
scanf("%f", &passesTentados);
printf("Insira o valor do numero de passes completos. \n");
scanf("%f", &passesCompletos);
printf("Insira o valor do numero jardas passadas. \n");
scanf("%f", &jardasPassadas);
printf("Insira o valor do numero de passes para touchdown. \n");
scanf("%f", &passesTouchdown);
printf("Insira o valor do numero de passes interceptados. \n");
scanf("%f", &passesInterceptados);
//parcela1
parcela1 = ((passesCompletos/passesTentados) - (0.3))/0.2;
//printf("%.2f\n",parcela1);
if(parcela1>2.375){
    parcela1 = 2.375;
}else if(parcela1<0){
    parcela1 = 0;
}

//parcela2
parcela2 = ((jardasPassadas/passesTentados)-3)/4;
//printf("%.2f\n",parcela2);
if(parcela2>2.375){
    parcela2 = 2.375;
}else if(parcela2<0){
    parcela2 = 0;
}
//parcela3
parcela3 = (passesTouchdown/passesTentados)/0.05;
//printf("%.2f\n",parcela3);
if(parcela3>2.375){
    parcela3 = 2.375;
}else if(parcela3<0){
    parcela3 = 0;
}
//parcela4
parcela4 = ((passesInterceptados/passesTentados)-0.095)/0.04;
//printf("%.2f\n",parcela4);
if(parcela4>2.375){
    parcela4 = 2.375;
}else if(parcela4<0){
    parcela4 = 0;
}
//printf ("%.2f\n%.2f\n%.2f\n%.2f\n",parcela1,parcela2, parcela3, parcela4);
soma = parcela1 + parcela1 + parcela3 + parcela4;

ratingQB = (soma)*100/6;

printf("O valor do QB Rating do quaterback e: %0.2f. \n", ratingQB);

system("PAUSE");
return 0;
}