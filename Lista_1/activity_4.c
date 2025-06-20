#include <stdio.h>

/* 4) Faça um programa que leia um numero inteiro de três dígitos e o imprima em ordem inversa. 
   Por exemplo, se o usuário digitar 123, seu programa deve imprimir 321. */

int main() {
    int valor = 0;

    printf("Digite um numero inteiro de 3 digitos: ");
        scanf("%d", &valor);

    if (valor < 100 || valor > 999) {
        printf("Valor invalido! Deve possuir 3 digitos!\n");
         return 0;
    }

    int d3 = valor / 100;
     int d2 = (valor / 10) % 10;
    int d1 = valor % 10;

    printf("Valor Invertido: %d%d%d\n", d1, d2, d3);

    return 0;
}
