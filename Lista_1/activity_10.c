#include<stdio.h>

/*15) Escreva um programa para calcular e mostrar a quantidade de litros de combustivel gastos em uma
viagem, ao utilizar um automovel que faz 12,7 km/l. Para efetuar o calculo, deve-se fornecer o tempo
gasto na viagem (em horas) e a velocidade media durante a mesma (em km/h). Assim pode-se obter
dist^ancia percorrida e em seguida calcular quantos litros seriam necessarios. Mostre o valor com 3
casas decimais apos o ponto.*/

int main(){

float media_combustivel = 12.7,  velocidade_media = 0, combustivel_consumido = 0, combustivel_total = 0;
int horas = 0;

    printf("Digite quanto tempo durou a viagem(em horas): \n");
        scanf("%d", &horas);
    printf("Digite a velocidade media (em km/h): \n");
        scanf("%f", &velocidade_media);

    combustivel_consumido = velocidade_media * horas; 
    combustivel_total = combustivel_consumido/media_combustivel;

    printf("Quantidade de combustivel consumida: %.3f ", combustivel_total);

    return 0;
}