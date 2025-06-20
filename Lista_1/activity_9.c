#include <stdio.h>

/*
9) Faça um programa que leia as dimensões de um terreno (comprimento e largura),
bem como o preço do metro de tela. Imprima o custo para cercar este terreno com tela.
Considere que o preço do metro de tela é sempre um valor inteiro.
*/

int main() {
    float comprimento, largura;
    int preco_metro;
    float perimetro, custo_total;

   
    printf("Digite o comprimento do terreno (em metros): ");
        scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
        scanf("%f", &largura);

    printf("Digite o preco do metro de tela (em reais): ");
        scanf("%d", &preco_metro);

    
      perimetro = 2 * (comprimento + largura);
      custo_total = perimetro * preco_metro;


    printf("O custo para cercar o terreno com tela eh: R$ %.2f\n", custo_total);

    return 0;
}
