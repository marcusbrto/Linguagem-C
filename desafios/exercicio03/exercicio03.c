#include <stdio.h>

int main() {
    float segundos,horas,minutos;
    printf("Digite o tempo de jogo em minutos: ");
    scanf("%f", &minutos);
    horas = minutos / 60;
    segundos = minutos * 60;
    printf("===========================\n");
    printf("O tempo de jogo em segundos: %.2f \n",segundos);
    printf("O tempo de jogo em horas: %.2f \n",horas);
    printf("O tempo de hogo em minutos: %.2f \n",minutos);
}