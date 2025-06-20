#include<stdio.h>

/*6) Escreva um programa que, leia tres notas inteiras, respectivamente dos alunos Aline, Pedro e Sergio,
e produza a seguinte saida na tela:

        Aluno  | Nota
        -----------------
        Aline  |    7
        Pedro  |    5
        Sergio |    10
*/

int main() {
    int nota1 = 0, nota2 = 0, nota3 = 0;

    printf("Digite a nota de Aline, Pedro e Sergio, respectivamente: \n");
        scanf("%d%d%d", &nota1, &nota2, &nota3);

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Erro! As notas devem estar entre 0 e 10.\n");
         return 1; 
    }

    printf("\nAluno  | Nota\n");
    printf("-----------------\n");
    printf("Aline  |   %d\n", nota1);
    printf("Pedro  |   %d\n", nota2);
    printf("Sergio |   %d\n\n", nota3);

    return 0;
}