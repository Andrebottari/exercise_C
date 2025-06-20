#include <stdio.h>

/*
7) Faça um programa que leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de
uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) do término
da experiência.
*/

int main() {
    int hora = 0, minutos = 0, segundos = 0;
    int duracao = 0;

    printf("Digite a hora, minuto e segundo de inicio, respectivamente: ");
        scanf("%d %d %d", &hora, &minutos, &segundos);

    printf("Digite a duraçao da experiencia em segundos: ");
        scanf("%d", &duracao);
    
    int total_segundos = hora * 3600 + minutos * 60 + segundos + duracao;

    int hora_final = (total_segundos / 3600) % 24;
    int minuto_final = (total_segundos % 3600) / 60;
    int segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora_final, minuto_final, segundo_final);

    return 0;
}
