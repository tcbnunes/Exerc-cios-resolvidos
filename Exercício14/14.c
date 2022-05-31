/*
Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
informações: 
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float distanciaTotal, velocidadePermitida, aceleracao, tempoTotal, distancia1, distancia2, tempo1, tempo2;
int delay = 3;
printf("Insira o valor da distancia desde o semaforo anterior. \n");
scanf("%f", &distanciaTotal);
printf("Insira o valor da velocidade permitida na via. \n");
scanf("%f", &velocidadePermitida);
printf("Insira o valor da aceleracao tipica dos carros. \n");
scanf("%f", &aceleracao);
tempo1 = (velocidadePermitida)/(aceleracao);
distancia1 = velocidadePermitida*velocidadePermitida/(aceleracao*2);
distancia2 = distanciaTotal - distancia1;
tempo2 = distancia2/velocidadePermitida;
tempoTotal = tempo1 + tempo2 - delay;
printf("O semaforo deve abrir com um atraso de %0.2f segundos.\n", tempoTotal);
system("pause");
return 0;
}