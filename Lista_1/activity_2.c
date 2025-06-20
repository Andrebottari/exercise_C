#include<stdio.h>

//) 2) Peca ao usuario para digitar tres valores inteiros e imprima o produto deles elevado ao quadrado.

int main(){

    int valor1 = 0, valor2 = 0, valor3 = 0, produto = 0;

    printf("Digite tres valores:\n");
        scanf("%d %d %d", &valor1, &valor2, &valor3);

    produto = (valor1*valor2*valor3);
    produto = produto*produto;

    printf("Resultado: %d \n",produto);


    return 0;
}