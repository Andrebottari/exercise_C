#include<stdio.h>


//1) Faca um programa que leia um nuumero inteiro e imprima seu valor elevado ao cubo

int main(){

    int valor = 0;

    printf("Digite um valor: \n");
        scanf("%d", &valor);

    valor = valor*valor*valor;

    printf("Resultado: %d", valor);

    return 0;
}