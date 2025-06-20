#include<stdio.h>

/*8) Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do
ano atual.*/

int main(){

    int idade = 0, ano_atual = 0, ano_nascimento= 0;

    printf("Digite sua idade e ano atual, respectivamente: \n");
        scanf("%d%d", &idade,&ano_atual);

        if (idade < 0 || ano_atual < 0 || idade > 130) {
            printf("Entrada invalida. Verifique os valores inseridos.\n");
        return 1; 
    }

    ano_nascimento = ano_atual - idade;

    printf("Seu ano de nascimento eh: %d", ano_nascimento);

    return 0;
}