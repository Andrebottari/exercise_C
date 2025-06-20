#include<stdio.h>

/*Faca um programa que leia um numero inteiro de cinco dıgitos e imprima cada um de seus dıgitos
separados por um hıfen. Por exemplo, se o usuario digitar 12345, seu programa deve imprimir 1-2-3-
4-5.*/

int main() {
    int valor;

    printf("Digite um numero de 5 digitos: ");
        scanf("%d", &valor);

    if (valor < 10000 || valor > 99999) {
        printf("Erro: o numero deve ter exatamente 5 digitos.\n");
        return 1;
    }

    int d1 = valor / 10000;
    int d2 = (valor / 1000) % 10;
    int d3 = (valor / 100) % 10;
    int d4 = (valor / 10) % 10;
    int d5 = valor % 10;

    printf("%d-%d-%d-%d-%d\n", d1, d2, d3, d4, d5);

    return 0;
}
