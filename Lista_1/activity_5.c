#include<stdio.h>

//5)Leia um numero inteiro de 4 digitos e imprima um dıgito por linha

int main(){

int valor = 0;


    printf("Digite um valor de 4 digitos: \n");
        scanf("%d", &valor);
    
        if (valor < 1000 || valor > 9999) {
        printf("Valor invalido! Deve possuir 4 digitos!\n");
         return 0;
    }

 int   d1 = valor / 1000; //milhar
 int   d2 = valor / 100 % 10; // centena
 int   d3 = valor / 10 % 10; //dezena
 int   d4 = valor %10; //unidade

    printf("%d\n%d\n%d\n%d\n", d1,d2,d3,d4);

    return 0;
}